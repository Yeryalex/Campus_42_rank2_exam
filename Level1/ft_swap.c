#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int saved_value;

    saved_value = *a;
    *a = *b;
    *b = saved_value;
}

int main()
{
    int *num1;
    int *num2;

    *num1 = 1;
    *num2 = 2;
    // test1 = 1;
    // test2 = 2;
    // num1 = &test1;
    // num2 = &test2;
    printf("%i\n", *num1);
    ft_swap(num1, num2);
    printf("%i\n", *num1);
    return (0);
}

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);