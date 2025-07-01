#include <stdio.h>

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
int no_doubles()
{
    
}

int main(int ac, char **av)
{
    int i;

    ;
    if (ac >= 2)
    {
        i = 1;
        while (i < ac)
        {
            if (ft_is_numeric_str(av[i]) && !no_doubles(av[i], i)) // Check first if its numerical :)
                printf("%s", av[i]);
            else
            {
                printf("its not a numeric string!!"); // Then return the message if its not numerical
                return (0);
            }
            printf("\n");
            i++;
        }
    }
    printf("\n");
    return (0);
}