#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int last_word(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i] == 32)
        i--;
    while (str[i] > 32 && str[i] <= 126)
        i--;
    i++;
    while (str[i] > 32 && str[i] <= 126)
    {

        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%i", last_word(argv[1]));
    else
        write(1, "\n", 1);
    return (0);
}