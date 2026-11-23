#include <stdio.h>
main(){
int a,i,somme=0;
for (a=1; i<=1000;a++){
somme=0;
for (i=1; i<=a/2;i++){
if (a%i==0) {
somme =somme+i;
}
}
if(somme==a){
printf("%d\n",somme);
}
}
return 0;
}