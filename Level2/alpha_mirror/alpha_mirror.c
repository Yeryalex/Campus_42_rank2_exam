#include <unistd.h>

void alpha_mirror(char *str)
{
    int i;
    int position;
    int distance;

    i = 0;
    while (*str)
    {
        if (*str >= 65 && *str <= 90)
        {
            position = 90 - *str;
            distance = 25 - position;
            *str = *str + position - distance;
            write(1, str, 1);
        }
        else if (*str >= 97 && *str <= 122)
        {
            position = 122 - *str;
            distance = 25 - position;
            *str = *str + position - distance;
            write(1, str, 1);
        }
        else
            write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}

// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.

// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'

// and so on.

// Case is not changed.

// If the number of arguments is not 1, display only a newline.

// Examples:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>