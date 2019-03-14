#include "../includes/ft_ls.h"

void    ft_lsl(t_file *lst)
{
    mode_t var;
    struct passwd *qwe;
    struct group *asd;
    char *temp;
    var = lst->stats.st_mode;
    ft_putchar(S_ISDIR(var) ? 'd' : '\0');
    ft_putchar(S_ISFIFO(var) ? 'p' : '\0');
    ft_putchar(S_ISCHR(var) ? 'c' : '\0');
    ft_putchar(S_ISLNK(var) ? 'l' : '\0');
    ft_putchar(S_ISREG(var) ? '-' : '\0');
    ft_putchar(S_ISBLK(var) ? 'b' : '\0');
    ft_putchar(S_ISSOCK(var) ? 's' : '\0');
    ft_putchar((var & S_IRUSR) ? 'r' : '-');
    ft_putchar((var & S_IWUSR) ? 'w' : '-');
    ft_putchar((var & S_IXUSR) ? 'x' : '-');
    ft_putchar((var & S_IRGRP) ? 'r' : '-');
    ft_putchar((var & S_IWGRP) ? 'w' : '-');
    ft_putchar((var & S_IXGRP) ? 'x' : '-');
    ft_putchar((var & S_IROTH) ? 'r' : '-');
    ft_putchar((var & S_IWOTH) ? 'w' : '-');
    ft_putchar((var & S_IXOTH) ? 'x' : '-');
    ft_putstr("    ");
    printf("%d  ",lst->stats.st_nlink);
    qwe = getpwuid(lst->stats.st_uid);
    asd = getgrgid(lst->stats.st_gid);
    printf("%s    ", qwe->pw_name);
    printf("%s    ", asd->gr_name);
    printf("%lld    ", lst->stats.st_size);
    temp = ctime(&lst->stats.st_mtimespec.tv_sec);
    printf("%s    ",temp);

}
