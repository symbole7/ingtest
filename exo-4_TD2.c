#include <stdio.h>
#include <math.h>

// utiliser un switch



float Puissance()
{
    float nb, p;
    printf("Veuillez saisir un nombre et la puissance desiree: \n");
    scanf("%f %f",&nb,&p);
    
    return(pow(nb,p));

}

float Racine_carree()
{
    int nb;
    printf("Veuillez saisir un nombre: \n");
    scanf("%d",&nb);
    return(sqrt(nb));
}

int Division()
{
    int nb, temp;
    int somme_d = 0;
    printf("Combien de nombre voulez vous diviser? \n");
    scanf("%d",&nb); // nb = nombre de valeurs que nous allons rentrer 

    for( int i=1; i<=nb; i++) // pour i allant jusqu'au nombre de valeurs a rentrer
    {   
        
        printf("Veuillez rentrer le nombre: %d \n",i);
        scanf("%d",&temp); // temp valeur saisi pour la division  // Ex: temp = 4 // temp = 2

        if (i==1)
            somme_d = temp;  // pour i=1 on ajoute la première valeur automatiquement à la somme // EX: somme_d=4
        else 
            somme_d /= temp; // pas d'accolade quand on a que 1 seule instruction entre les accolades // RIEN // somme_d = 4/2 = 2
    }

    return(somme_d);

}

int Produit()
{
    int nb, temp;
    int somme_p = 1;
    printf("Combien de nombre voulez vous multiplier ? \n");
    scanf("%d",&nb);

    for( int i=1; i<=nb; i++)
    {   
        
        printf("Veuillez rentrer le nombre: %d \n",i);
        scanf("%d",&temp);
        
        somme_p *= temp; // pas d'accolade quand on a que 1 seule instruction entre les accolades
    }

    return(somme_p);
}
int Soustraction()
{
    int nb, temp;
    int somme = 0;
    printf("Combien de nombre voulez vous soustraire ? \n");
    scanf("%d",&nb);

    for( int i=1; i<=nb; i++)
    {   
        
        printf("Veuillez rentrer le nombre:%d \n",i);
        scanf("%d",&temp);
        if(i==1)
            somme = temp;
        else
            somme -= temp; // pas d'accolade quand on a que 1 seule instruction entre les accolades
    }

    return(somme);
}



int Addition()
{   
    int nb, temp;
    int somme = 0;
    printf("Combien de nombre voulez vous additionner: \n");
    scanf("%d",&nb);

    for( int i=1; i<=nb; i++)
    {
        printf("Veuillez rentrer le nombre:  %d \n",i);
        scanf("%d",&temp);

        somme += temp;

    }

    return(somme);
}
void menu()

{
    int choixMenu;

    printf("Entrer votre choix \n");
    printf("-1 Addition \n");
    printf("-2 Produit \n");
    printf("-3 Soustraction \n");
    printf("-4 Division \n");
    printf("-5 Racine carree \n");
    printf("-6 Puissance \n");
    printf("-7 Quitter\n");
    scanf("%d",&choixMenu);

    switch(choixMenu)
    {
        case 1:
            printf("L'addition de ces nombres donnent : %d",Addition());
            break;
        case 2: 
            printf("Le produit de ces nombres donnent : %d",Produit());
            break;
        case 3: 
            printf("La soustraction de ces nombres est : %d",Soustraction());
            break;
        case 4: 
            printf("La division de ces nombres est : %d",Division());
            break;
        case 5:
            printf("La racine carre de ce nombre est : %f",Racine_carree());
            break;
        case 6:
            printf("La puissance de ce nombre est : %f",Puissance());
            break;
        case 7:
            printf("Quitter");
            break;
        default:
            printf("Choisir une valeur entre 1 et 7");


        
    }
}

int main ()
{
    
    menu();

    

    return 0;
}