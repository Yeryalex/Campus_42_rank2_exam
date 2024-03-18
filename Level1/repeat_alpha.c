#include <unistd.h>
#include <stdio.h>

void repeat_alpha(char *str)
{
    int i;
    int j;

    while (*str)
    {
        i = 0;
        j = 0;
        if (*str >= 65 && *str <= 90)
            i = *str - 64;
        while (j < i)
        {
            write(1, str, 1);
            j++;
        }
        if (*str >= 97 && *str <= 122)
            i = *str - 96;
        while (j < i)
        {
            write(1, str, 1);
            j++;
        }
        if (!(*str >= 65 && *str <= 90) && !(*str >= 97 && *str <= 122))
            write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>