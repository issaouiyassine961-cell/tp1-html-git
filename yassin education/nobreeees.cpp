#include <stdio.h>

int main() {
    int n, i = 1, x;
    int pos = 0, neg = 0, nul = 0;
    int pair = 0, impair = 0;
    int max, min;
    printf("Donner N: ");
    scanf("%d", &n);
    while (n <= 0) {
	printf("Donner N positif: ");
    scanf("%d", &n);
}
    printf("Donner un nombre: ");
    scanf("%d", &x);
    max = x;
    min = x;
   while (i <= n) {
   if (x > 0)
      pos++;
   else if (x < 0)
            neg++;
  else
      nul++;
  if (x % 2 == 0)
     pair++;
else
    impair++;
if (x > max)
   max = x;
if (x < min)
   min = x;
   i++;
if (i <= n) {
             printf("Donner un nombre: ");
             scanf("%d", &x);
}
}
printf("\nPositifs = %d", pos);
printf("\nNegatifs = %d", neg);
printf("\nNuls = %d", nul);
printf("\nPairs = %d", pair);
printf("\nImpairs = %d", impair);
printf("\nMaximum = %d", max);
printf("\nMinimum = %d", min);

return 0;
}
