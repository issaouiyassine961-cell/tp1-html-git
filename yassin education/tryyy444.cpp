#include <stdio.h>
#include <conio.h>
int main()
{int x,s,a,i;
	s=0;
	printf("donner un nombre");
	scanf("%d ",&x) ;
	for (i=0;i<x;i++){
		printf("donner un nombre");
	    scanf("%d ",&a) ;
		
		s=s*a;
	}
		
	printf("%d",s);
	}
	