#include "../includes/ft_ls.h"

int main()
{
    struct dirent *lecture;
    DIR *rep;
    t_file *test;
   
	test = (t_file *)ft_memalloc(sizeof(t_file)); 
    test->name = ft_strdup(".");
    rep = opendir(test->name );
  
	lstat(test->name, &(test->stats));
    while ((lecture = readdir(rep))) 
    {
        printf("name :%s    type : %d\n", lecture->d_name, lecture->d_type);
    }
    printf("%llu",test->stats.st_ino);
    closedir(rep);
}