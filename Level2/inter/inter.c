#include <unistd.h>

char *inter(char *str1, char *str2)
{

}

int main(int argc, char **argv)
{
    if (argc == 2)
        inter(argv[1], argv[2]);
    else
        write(1, "\n", 1);
    return (0);
}