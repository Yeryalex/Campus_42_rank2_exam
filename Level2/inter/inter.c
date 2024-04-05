#include <unistd.h>

int find_char(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

int trigger(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void inter(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i])
    {
        if (find_char(str2, str1[i]) == 1 && trigger(str1, str1[i], i) == 1)
            write(1, &str1[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    else
        write(1, "\n", 1);
    return (0);
}