#include <stdio.h>
int main (){
int heure;
int h;
int m;
scanf("%d",heure);
printf("donner le temps:");
if (heure>60);
    h=heure/60;
    m=heure%60;
	printf("%d%d",h,m);
if (heure<60);
   printf("%d",heure);

}