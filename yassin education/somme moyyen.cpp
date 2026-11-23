#include <stdio.h>

int main() {
    int n, i = 1;
    float x, somme = 0, moyenne;

    printf("Donner N:" );
    scanf("%d", &n);

    while (i <= n) {
        printf("Donner un reel:" );
        scanf("%f", &x);

        somme = somme + x;
        i++;
    }

    moyenne = somme / n;

    printf("Somme = %.2f\n", somme);
    printf("Moyenne = %.2f\n", moyenne);

    return 0;
}