#include "../includes/ft_ls.h"

/*void    ft_exit0()
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
}*/
void ft_exit(char *param)
{
    struct dirent *lecture;
    DIR *rep;
    t_file *test;
    char *spath;
   
    if(!(ft_parsing(param)))
        exit(0);
	test = (t_file *)ft_memalloc(sizeof(t_file)); 
    test->name = ft_strdup(param);
    rep = opendir(test->name);
  
	
//	printf("---- ****************   %d\n", test->stats.);
	//printf("---- ****************   %d\n", test->stats.st_mode.S_IFMT);
    while ((lecture = readdir(rep))) 
    {  
        spath = ft_strjoin(ft_strjoin(param, "/"), lecture->d_name);
        lstat(spath, &(test->stats));
        //printf("-------------------  %hu -------\n", test->stats.st_mode);
        ft_lsl(&test->stats);
        
        printf("%s\n", lecture->d_name);
    }
    printf("************%llu",test->stats.st_ino);
    closedir(rep);
}

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    while(i <= argc)
    {
                ft_exit(argv[i++]);
    }
    

    return (0);
}
