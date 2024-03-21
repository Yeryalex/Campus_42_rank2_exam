int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        result = result * 10 + (*str - 48);
        str++;
    }
    return (result * sign);
}