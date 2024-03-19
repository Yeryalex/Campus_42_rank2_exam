#include <unistd.h>

void alpha_mirror(char *str)
{
    int i;
    int position;

    i = 0;
    while (/str)
    {
        position = (str[i] % 65);
        str[i] = position;
        write(1, &str[i], 1);
        i++;
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