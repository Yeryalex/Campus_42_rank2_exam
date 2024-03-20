#include <stdlib.h>
#include <stdio.h>

int do_op(char *number1, char *operator, char * number2)
{
    int value1;
    int value2;
    int operation;

    value1 = atoi(number1);
    value2 = atoi(number2);
    if (*operator== '+')
        operation = value1 + value2;
    else if (*operator== '-')
        operation = value1 - value2;
    else if (*operator== '*')
        operation = value1 * value2;
    else if (*operator== '/')
        operation = value1 / value2;
    return (operation);
}
int main(int argc, char **argv)
{

    if (argc == 4)
        printf("%i", do_op(argv[1], argv[2], argv[3]));
    else
        printf("\n");
    return (0);
}