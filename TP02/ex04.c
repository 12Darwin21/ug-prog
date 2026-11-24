#include <stdio.h>

void ft_print_number_len(int number)
{
    int count;

    count = 0;
    if (number == 0)
        count = 1;
    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }
    printf("%d", count);
}