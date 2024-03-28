int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    i = 0;
    len = ft_strlen(str);
    while (str[i] && i < len / 2)
    {
        c = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = c;
        i++;
    }
    return (str);
}