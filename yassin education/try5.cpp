#include <stdio.h>
int main (){
	int t,h,m,s;
	printf("donner une dure t:\n");
	scanf("%d",&t);
	h=t/60;
	m=(t%60)/60;
	s=(t%60)%60;
	printf("le temps est  %d h %d m %d s" ,h,m,s);
}