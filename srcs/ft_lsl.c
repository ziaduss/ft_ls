#include "../includes/ft_ls.h"

void    ft_print_time(char *str)
{
    int i;
    int nb;

    nb = 0;
    i = 4;
    while (str[i])
    {
        if (str[i] == ':')
            nb++;
        if (nb < 2)
        {
            ft_putchar(str[i]);
        }
        i++;

    }

}

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
    ft_putnbr(lst->stats.st_nlink);
    ft_putstr("    ");
    qwe = getpwuid(lst->stats.st_uid);
    asd = getgrgid(lst->stats.st_gid);
    ft_putstr(qwe->pw_name);
    ft_putstr("    ");
    ft_putstr(asd->gr_name);
    ft_putstr("    ");
    ft_putnbr(lst->stats.st_size);
    ft_putstr("    ");
    temp = ctime(&lst->stats.st_mtimespec.tv_sec);
    ft_print_time(temp);
    ft_putstr("    ");
    //printf("%s    ",temp);

}
