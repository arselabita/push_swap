#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int ft_is_numeric_str(const char *str)
{
    int i;

    if (str == NULL || *str == '\0') 
        return (0); // Empty or null string is not numeric
    i = 0;
    while (str[i]) 
    {
        if (!ft_isdigit(str[i])) 
            return (0); // Non-digit character found
        i++;
    }
    return (1); // All characters are digits
}
int no_doubles(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
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
                if (ft_is_numeric_str(&av[i][j]) && !no_doubles(av[i], av[i][j], j)) // Check first if its numerical and no doubles :)
                    write(1, &av[i][j], 1);
                else
                    return (write(1, "its not a numeric string!!", ft_strlen("its not a numeric string!!")), 0);// Then return the message if its not numerical
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}