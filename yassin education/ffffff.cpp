#include <stdio.h>
main(){
	char s;
	float t,p,bmi;
	printf("donner votre cex");
	scanf("%s",&s);
	printf("donner votre taile");
	scanf("%s",&t);
	printf("donner votre poisd");
	scanf("%s",&p);
	
	if (s=='h')
	bmi=(p)*(t/100);	
	if(bmi>70)
	printf("cette personne est obaise");
	if(bmi>70)
	printf("cette personne est normal");
	if(s=='f')
	bmi=(p)*(t/100);
	if(bmi>50)
	printf("cette personne est obaise");
	if(bmi>50)
	printf("cette personne est normal");
	
}