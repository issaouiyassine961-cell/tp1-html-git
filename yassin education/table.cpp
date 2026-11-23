#include <stdio.h>

int main()
{
    int T[100], n, i;
    int max, min, somme = 0;
    int pos = 0, neg = 0;
    float moyenne;

    printf("Donner n : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

   
    max = T[0];
    min = T[0];

    
    for(i = 0; i < n; i++)
    {
        somme = somme + T[i];

        if(T[i] > max)
            max = T[i];

        if(T[i] < min)
            min = T[i];

        if(T[i] > 0)
            pos++;

        if(T[i] < 0)
            neg++;
    }

    moyenne = (float)somme / n;

   
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Somme = %d\n", somme);
    printf("Positifs = %d\n", pos);
    printf("Negatifs = %d\n", neg);
    printf("Moyenne = %.2f\n", moyenne);

    return 0;
}