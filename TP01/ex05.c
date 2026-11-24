#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int somme;

    number = 4;
    i = 1;
    somme = 0;
    while (i <= number)
    {
        somme = somme + i;
        i = i + 1;
    }
    printf("%d", somme);
    return (0);
}