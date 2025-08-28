int ft_is_numbers(char *str)
{
    int i;

    i = 0;

}
int print_after_split(char *)
{
    while (numbers[i])
    {
        if (!ft_valid_number(numbers[i]))
        {
            write(1, "Error", 5);
            free_split(numbers);
            return (0);
        }
        i++;
    }
}
int error_check(int ac, char **av)
{
    char **numbers;
    int i;

    else if (ac == 2)
    {
        numbers = ft_split(av[1]);
        if(!numbers)
            return (NULL);
        i = 0;

        free_split(numbers);
    }
    else
    {
        i = 1;
        while (i < ac)
        {
            if(!ft_valid_numbers(av[i]))
            {
                write(1, "Error", 4);
                return (0);
            }
            i++;
        }
    }
}
