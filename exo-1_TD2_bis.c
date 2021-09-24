#include <stdio.h>


//Un nombre premier est donc un nombre dont ses seuls diviseurs sont 1 et lui-même 
// par exemple 4 : a comme diviseur 1 2 4
int main()
{
    int N; 
    printf("Saisir une valeur de N :");
    scanf("%d",&N);

    int diviseur, nb_diviseurs = 0;

    for(diviseur = 1; diviseur <= N ; diviseur ++) // div va de 1 à N
    {
        if(N % diviseur == 0)  
        {
            nb_diviseurs++;
        }
    }
        if (nb_diviseurs == 2) // 3 div par 1 reste 0 3 div par 3 reste 0 
        {
            printf("Ce nombre est premier \n");
        }
        else {
            printf("Ce nombre n'est pas prem \n");
        }
    
    int i; 
    printf(" \n Les %d premiers nombres premiers \n",N);

    for(i = 1 ; i <= N ; i++) // i allant de 1 à N=5  || ici je fais varier mon i 
    {
        nb_diviseurs = 0; 
        for(diviseur = 1 ; diviseur <= i ; diviseur++)  // de 1 à i ( de 1 à i=1 | de 1 à i=2 | de 1 à i=3 etc..)  || ici je fais varier mon diviseur
        {
            if(i % diviseur == 0)
                nb_diviseurs++;

        }
        if (nb_diviseurs == 2)
        printf("%d \t",i);
        
    }
    printf("\n"); 


    return 0;
}