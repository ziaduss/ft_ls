#include "../includes/ft_ls.h"

void    ft_exit0()
{
    struct dirent *lecture;
    DIR *rep;
    t_file *test;   

	test = (t_file *)ft_memalloc(sizeof(t_file)); 
    test->name = ft_strdup(".");
    rep = opendir(test->name );
    while ((lecture = readdir(rep)))
    {
        if (ft_strncmp(lecture->d_name, ".", 1) != 0)
            ft_putendl(lecture->d_name);
    }
}
void ft_exit(char *param)
{
    struct dirent *lecture;
    DIR *rep;
    t_file *test;
   
	test = (t_file *)ft_memalloc(sizeof(t_file)); 
    test->name = ft_strdup(param);
    rep = opendir(test->name );
  
	lstat(test->name, &(test->stats));
    while ((lecture = readdir(rep))) 
    {
        if (lecture->d_type == 4)
            printf("d ");
        else
        {
            printf("- ");
        }
        
        printf("%s\n", lecture->d_name);
    }
    //printf("%llu",test->stats.st_ino);
    closedir(rep);
}

int     main(int argc, char **argv)
{
    int i;

    i = argc;
    if (argc == 1)
        ft_exit0();
    else
        ft_exit(argv[1]);
    return (0);
}