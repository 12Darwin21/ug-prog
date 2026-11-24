int ft_cumulative(int number)
{
    int i;
    int somme;

    i = 1;
    somme = 0;
    while (i <= number)
    {
        somme = somme + i;
        i = i + 1;
    }
    return (somme);
}