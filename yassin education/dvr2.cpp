#include <stdio.h>

main()
{
    /* Déclarations */
    char txt[20];       /* chaîne donnée */
    int I;             /* indice courant */
    int L = 0;         /* longueur de la chaîne */

    /* Saisie des données */
    printf("Entrez une chaîne (max.20 caractères) :\n");
    gets(txt);

    /* a) Compter les caractères */
    for (I=0; txt[I]!='\0'; I++)
    {
    	L++;
    }
    printf("la longeur %d",L);

}