#include <stdio.h>

int main()
{
    
    int A[50], B[50], C[100];
    int N;
    int IA, IB, IC;

    
    
    printf("Dimension des tableaux A et B (max 50) : ");
    scanf("%d", &N);

    printf("Entrer les elements de A dans l'ordre croissant :\n");
    for (IA = 0; IA < N; IA++)
    {
        printf("Element A[%d] : ", IA);
        scanf("%d", &A[IA]);
    }

    printf("Entrer les elements de B dans l'ordre croissant :\n");
    for (IB = 0; IB < N; IB++)
    {
        printf("Element B[%d] : ", IB);
        scanf("%d", &B[IB]);
    }

  
    printf("\nTableau A :\n");
    for (IA = 0; IA < N; IA++)
    {
        printf("%d ", A[IA]);
    }

   
    printf("\nTableau B :\n");
    for (IB = 0; IB < N; IB++)
    {
        printf("%d ", B[IB]);
    }

   
    IA = 0;
    IB = 0;
    IC = 0;

    while ((IA < N) && (IB < N))
    {
        if (A[IA] < B[IB])
        {
            C[IC] = A[IA];
            IC++;
            IA++;
        }
        else
        {
            C[IC] = B[IB];
            IC++;
            IB++;
        }
    }

    
    while (IA < N)
    {
        C[IC] = A[IA];
        IC++;
        IA++;
    }

  
    while (IB < N)
    {
        C[IC] = B[IB];
        IC++;
        IB++;
    }

    
    printf("\n\nTableau C :\n");
    for (IC = 0; IC < 2 * N; IC++)
    {
        printf("%d ", C[IC]);
    }

    printf("\n");

    return 0;
}