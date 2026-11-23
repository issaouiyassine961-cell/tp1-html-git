#include <stdio.h>
main(){
	float m;
	printf("donner le moyenne d un etudiant");
    scanf("%f",&m);
    if(m>=16)
    printf("admisnavec mention tres bien");
     
	if(m>=14 && m<16)
    printf("admis avec mention bien");
	
    if(m>=12 && m<14)
    printf("admis avec mention assez bien");
    if(m>=10 && m<12)
	printf("admis avec mention pasable");
}
	
	
