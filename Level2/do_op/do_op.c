#include <unistd.h>
#include <stdio.h>

int atoi(char *str)
{
    int result;
    int sign;

    sign = 1;
    result = 0;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        result = result * 10 + (*str - 48);
        str++;
    }
    return (result * sign);
}

int do_op(char *number1, char *operator, char * number2)
{
    int value1;
    int value2;
    int operation;

    value1 = atoi(number1);
    value2 = atoi(number2);
    if (*operator== '+')
    {
        operation = value1 + value2;
    }
    return (operation);
}
int main(int argc, char **argv)
{
    if (argc == 4)
        printf("%i", do_op(argv[1], argv[2], argv[3]));
    else
        write(1, "\n", 1);
    return (0);
}