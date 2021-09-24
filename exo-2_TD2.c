#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int somme = 0;

    for (i = 1; i <= 10; i++)  // i varie de 1 à 100
    {
        if (i%2 != 0)  // si i != 0
        {
            somme+= i*i;
            // je mets ce printf ici pour voir les étapes
            //printf("La somme des carres des entiers impairs est : %d \n",somme);
        }
    }
    printf("La somme des carres des entiers impairs est : %d \n",somme);
    // 1 2 3 5 7 11
    // 2-1 = 1 || 3-1 = 2
    int j = 1, diviseur, nb_diviseurs = 0, difference;
    somme = 0;
    

    for (i=2 ; i <=10 ; i++)  // i va de 2 à 10
    {
        nb_diviseurs = 0; 
        for(diviseur = 1 ; diviseur <= i ; diviseur++) // le div varie de 1 à i ( ici 10)
        {
            if (i % diviseur == 0)
                nb_diviseurs++;
        }
        if (nb_diviseurs == 2)
        {
            difference = i - j;
            j = i; // on passe au nombre suivant 
            somme += difference; 
            printf("%d \t",difference); // affiche pour i <= 10 ||  1 (i=2-j=1)  1 (i=3-j=2)  2 (i=5-j=3)  2 (i=7-j=5)
        }

    }
    printf("\n");
    printf("Somme = %d \n", somme);
    printf("Racine de la somme = %.2f \n", sqrt(somme));
    printf("\n");




    return 0;
}