#include <stdio.h>

int main(void)
{
    int i;

    i = 42;
    while (i <= 1337)
    {
        printf("%d", i);
        if (i + 2 <= 1336)
        {
            printf(" ");
        }
        i = i + 2;
    }
    printf("\n");
    return (0);
}