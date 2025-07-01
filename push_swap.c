#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac >= 2)
    {
        i = 1;
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}