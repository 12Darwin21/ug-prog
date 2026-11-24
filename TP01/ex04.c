#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    int b;
    int c;
    int delta;
    float x1;
    float x2;

    a = 1;
    b = -7;
    c = 12;
    delta = b * b - 4 * a * c;
    printf("Delta = %d\n", delta);
    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Il existe 2 solutions\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Il existe 1 solution\n");
        printf("x = %f\n", x1);
    }
    else
    {
        printf("Il n'existe aucune solution\n");
    }
    return (0);
}