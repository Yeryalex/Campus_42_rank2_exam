#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_check_char(char *str1, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str1[i] == c)
            return (0);
        i++;
    }
    return (1);
}


char *ft_strcat(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i])
        i++;
    while (str2[j])
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    return (str1);
}

void    ft_union(char *str1, char *str2)
{
    int i;
    char *new_str;

    i = 0;
    new_str = ft_strcat(str1, str2);
    while (new_str[i])
    {
        if (ft_check_char(new_str, new_str[i], i) == 1)
            write(1,&new_str[i], 1);
        i++;
    }
    
} 

int main(int argc, char **argv)
{
    ft_union(argv[1], argv[2]);
    return (0);
}
