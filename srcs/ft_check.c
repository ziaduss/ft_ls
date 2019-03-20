
int    ft_parsing(char *str)
{
    int t;
    int i;

    i = 0;
    t = 0;
    if (str[0] == '-')
    {
        if (!(ft_test_arg(str)))
            return (0);
    }
    return(1);
    
}

//void    ft_verif_file(char *s)
//{

//}

int     ft_check(char *s)
{
    int i;
    int res;

    i = 0;
    res = ft_test_arg(s);
    if (res == 0)
        exit;
    else if (res == 1)
//        option ok
    exit;
    else
        ft_verif_file(s);
}