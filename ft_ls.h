#ifndef FT_LS_H
# define FT_LS_H

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include "../libft/libft.h"

typedef struct         s_file
{
    char            *name;
    struct stat     stats;
}                   t_file;

#endif