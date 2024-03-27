#include <string.h>
#include <stdio.h>

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
    int j;
    char c;

    i = 0;
    j = ft_strlen(str) - 1;
    while (str[i] && i <= j / 2)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char str[] = "hello, world";
    char str2[] = "hello, world";
    char *reversed;
    char *reversed2;

    reversed = strrev(str);
    reversed2 = ft_strrev(str2);

    printf("%s\n", reversed);
    printf("%s\n", reversed2);
    return (0);
}