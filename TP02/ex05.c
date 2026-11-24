#include <stdio.h>

void ft_print_even_odd(int start, int end)
{
    int i;
    int even;
    int odd;

    i = start;
    even = 0;
    odd = 0;
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            if (even == 0)
                printf("Even : ");
            printf("%d", i);
            even = 1;
        }
        else
        {
            if (odd == 0)
                printf("Odd : ");
            printf("%d", i);
            odd = 1;
        }
        i = i + 1;
    }
    if (even == 1)
        printf("\n");
    if (odd == 1)
        printf("\n");
}