#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *copy;
    int i;

    copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!copy)
        return (0);
    i = 0;
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main()
{
    char *ptr = "";
    char *newStr = ft_strdup(ptr);
    // char *new = strdup(ptr);
    printf("%s\n", newStr);
    // printf("%s", new);
    return (0);
}