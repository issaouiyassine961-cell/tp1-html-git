#include <stdio.h>
int main(){
int x;
int y;
int z;
int a;
x=5;
y=-8;
z=2;
printf("%d,%d,%d",x,z,y);
a=x;
x=y;
y=z;
z=a;
printf("%d%d%d",x,z,y);


}