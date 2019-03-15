#include "../includes/ft_ls.h"

int   ft_test_arg(char *str)
{
    int i;

    i = 1;
    while (str[i])
    {
        if (str[i] != 'R' && str[i] != 'a' && str[i] != 'l' && str[i] != 'r' && str[i] != 't')
            {
                ft_putstr("./ft_ls: illegal option -- ");
                ft_putchar(str[i]);
                ft_putchar('\n');
                ft_putstr("usage: ./ft_ls [-Ralrt] [file ...]");
                ft_putchar('\n');
                return (0);            
            }
    }
    return (1);
}

void    ft_parsing(char *str)
{
    if (str[0] == '-')
        {
            if (!(ft_test_arg(str)))
                exit(0);
        }

}