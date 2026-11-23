#include <stdio.h>
#include <math.h>
main(){
	float a,b,c,x1,x2,delta;
	printf("entrer a et b et c");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==0)
	printf("fonction est impossible");
	
	else{ delta=b*b-4*a*c ;
	if(delta>0){
	
	x1=(-b-sqrt(delta))/(2*a);
	x2=(-b+sqrt(delta))/(2*a);
	printf("x1= %f", x1);
	printf("x2= %f", x2);}
	
	else if(delta == 0){
	x1=-b/(2*a);
	printf("x=  %f", x1);}
	
	
	

	return 0;
}}