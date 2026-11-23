#include <stdio.h>

int main()
{
    char CH1[50], CH2[20];
    int i, L = 0;

    printf("Donner la premiere chaine : ");
    gets(CH1);

    printf("Donner la deuxieme chaine : ");
    gets(CH2);

    for (i = 0; CH1[i] != '\0'; i++)
        L++;


    for (i = 0; CH2[i] != '\0'; i++)
    {
        CH1[L] = CH2[i];
        L++;
    }

    CH1[L] = '\0';
    printf("La chaine concatenee est : %s", CH1);

    return 0;
}