#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int main(int ac, char **av)
{
    int i;
    int j;
    int n;

    n = ft_atoi(av[i]);
    if (ac >= 2)
    {
        i = 1;
        while (i < ac)
        {
            if (ft_isdigit(n))
                printf("%d", n);
            else
                printf("%d its not a numeric string!!", n);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}