#include <stdio.h>

// un nombre premier est un nombre dont ses seuls diviseurs sont 1 et lui même 
int main()
{
    int val;
    printf("Veuillez saisir un nombre : \n");
    scanf("%d",&val);//&:adresse

    for (int i=2 ; i <= val-1 ; i++) // i=2 car 13%1 le reste =0 et 13%13 rest=0
    {
        if (val % i == 0) // si c'est un nombre premier il ne rentrera jamais dans la boucle
                            // par exemple 13 ne rentrera jamais dans la boucle
        {
            printf("Ce nombre n'est pas un nombre premier");
            return 0;
        }
    }
    printf("Ce nombre est premier");

    //Question 2:
    
    return 0;
}