#include "../includes/ft_ls.h"

int main()
{
    struct dirent *lecture;
    DIR *rep;
    rep = opendir("." );
    while ((lecture = readdir(rep))) {
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);
}