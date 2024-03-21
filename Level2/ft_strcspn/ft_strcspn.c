#include <stddef.h>

int ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return (0);
        str++;
    }
    return (1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t len;

    len = ft_strlen((char *)s);
    i = 0;
    while (i < len && ft_strchr(reject, s[i]) != 0)
        i++;
    return (i);
}