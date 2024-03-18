#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_digits()
{
    char *number;
    int     i;

    number = "0123456789";
    i = 1;
    while (i < 10)
    {
        if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            ft_putchar(number[i]);
            ft_putchar('\n');
        }
        i++;
    }
}

void    ft_decenas()
{
    char *number;
    int     i;

    number = "0123456789";
    i = 10;
    while (i < 100)
    {
        if (i % 5 == 0 && i % 3 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            ft_putchar(number[i / 10]);
            ft_putchar(number[i % 10]);
            ft_putchar('\n');
        }   
        i++;
    }
}

void ft_write_numbers()
{
    ft_digits();
    ft_decenas();
    write(1, "100", 3);
}

int main()
{
 
    ft_write_numbers();
    return (0);
}

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>