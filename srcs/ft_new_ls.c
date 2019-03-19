#include "../includes/ft_ls.h"

static int		get_full_path(char path[PATH_MAX], char *name,
								char full_path[PATH_MAX])
{
	int	i;

	i = -1;
	while (path[++i])
		full_path[i] = path[i];
	if (i && i < PATH_MAX)
		if (!(path[0] == '/' && path[1] == '\0'))
			full_path[i++] = '/';
	while (*name && i < PATH_MAX)
		full_path[i++] = *name++;
	if (i < PATH_MAX)
		full_path[i] = '\0';
	else
		//errno = ENAMETOOLONG;
	return ((i < PATH_MAX) ? 1 : 0);
}

static t_info	*ft_new_ls(char path[PATH_MAX], char *name, struct stat *stats)
{
	t_info	*lst;

	if (!(lst = (t_info*)ft_memalloc(sizeof(t_info)))
	|| (!(lst->name = ft_strdup(name))))
		ls_error(NULL, 2);
	lst->s_mode = stats->st_mode;
	lst->s_nlink = stats->st_nlink;
	lst->s_uid = stats->st_uid;
	lst->s_gid = stats->st_gid;
	lst->s_size = stats->st_size;
	//lst->st_rdev = stats->st_rdev;
	lst->s_time = stats->st_mtimespec.tv_sec;
	//lst->ntime = stats->st_mtimespec.tv_nsec;
//	lst->st_blocks = stats->st_blocks;
	get_full_path(path, name, lst->full_path);
	lst->next = NULL;
	return (lst);
}


int				add_new_file(char path[PATH_MAX], char *name, t_info **lst)
{
	char		full_path[PATH_MAX];
	struct stat		stats;

	if (!(get_full_path(path, name, full_path)))
	{
		ls_error(name, 1);
		return (-1);
	}
	if (lstat(full_path, &stat) == -1)
		return (-1);
	if (!*lst)
		*lst = new_file(path, name, &stat);
	else
	{
		while ((*lst)->next)
			lst = &((*lst)->next);
		(*lst)->next = new_file(path, name, &stat);
	}
	return (1);
}