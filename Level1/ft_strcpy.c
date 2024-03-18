#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *str1, char *str2)
{
    if (!str1 || !str2)
        return (0);
    int i;

    i = 0;
    while (str2[i])
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    return (str1);
}

int main(int argc, char **argv)
{
    printf("%s", ft_strcpy(argv[1], argv[2]));
    return (0);
}

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);