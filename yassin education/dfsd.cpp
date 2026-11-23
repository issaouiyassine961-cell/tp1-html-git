#include <stdio.h>
min(){
	int a ,m,j;
	printf("donner le anner et le mois et le jour");
	scanf("%d%d%d",&a,&m,&j);
	switch(m)
	case 1:printf("janvier 31 jour")
	case 2:if((a%4==0) |( a%400==0 )&& (a%100 !=0)  ))
	printf("fivrier 29 jour")
	else{printf("fivrier 28 jour")
	}
	case 3:printf("avril 30 jour")
	case 4:printf("may 31 jour")
	case 5:printf("join 31 jour")
	case 6:printf("july 31 jour")
}