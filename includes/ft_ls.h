#ifndef FT_LS_H
# define FT_LS_H

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include "../libft/libft.h"
#include <pwd.h>
#include <grp.h>
#include <time.h>
# include <limits.h>
enum	{ERRNO, USAGE, MALL_ERR};

typedef struct         s_file
{
    char            *name;
    struct stat     stats;
}                   t_file;

typedef struct          s_info
{
    char        full_path[PATH_MAX];
    mode_t      s_mode;
    nlink_t     s_nlink;
    uid_t       s_uid;
    gid_t       s_gid;
    char        *name;
    char        *groupe;
    off_t       s_size;
    time_t      s_time;
    struct s_info *next;
}                       t_info;

void    ft_lsl(struct stat *lst);
int    ft_parsing(char *str);


#endif