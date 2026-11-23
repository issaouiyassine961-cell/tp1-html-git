#include <stdio.h>
#include <math.h>
 main(){
 	int a;
	printf("donner le anner");
	scanf("%d",&a);
	if((a%4==0) |( a%400==0 )&& (a%100 !=0)  )
	printf("anner est bisextil");
	else{printf("anner est n est pas bisextil");
	}
	return(0);
        



}
