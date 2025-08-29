
#include "libft.h"

int ft_dublicate(char *str, char ch, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == ch)
            return (0); // dublicate found
        i++;
    }
    return (1); // no dublicate found
}

/*int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (!ft_dublicate(argv[1], argv[1][i], i))
                return (0);    
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}*/