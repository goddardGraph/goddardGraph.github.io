#include <stdio.h>
int main(int argc, char *argv[])
{
    int x;
    printf("argc is %d\n", argc);
    for (x=0; x<argc; x++)
        printf("arg[%d] is %s\n", x, argv[x]);
    return 0;
}
