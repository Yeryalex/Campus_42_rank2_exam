#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t counter;

    counter = 0;
    while (*s == *accept)
    {
        counter++;
        accept++;
        s++;
    }
    return (counter);
}