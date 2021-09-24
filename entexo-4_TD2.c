#include <stdio.h>
#include <math.h>

void menu()  //void = vide
{
    printf("1-Addition--\n"); 
    printf("2-Soustraction--\n"); 
    printf("3-Multiplication--\n"); 
    printf("4-Division--\n"); 
    printf("5-Racine carree--\n"); 
    printf("6-Puissance--\n"); 
    printf("7-Quitter--\n"); 
}

float Puissance()
{
    float nb,p;
    printf("Veuillez rentrer un nombre et la puissance desiree : \n");
    scanf("%f %f",&nb,&p);
    return(pow(nb,p));

}

float Racine_carree()
{
    float rac;
    printf("Veuillez entrer le nombre dont vous voulez connaitre la racine carree : \n");
    scanf("%f",&rac);

    return(sqrt(rac));
}

int Division()
{
    int nb, temp;
    int somme_d = 0;
    printf("Combien de nombre voulez vous diviser ? \n");
    scanf("%d",&nb);

    for ( int i=1 ; i <= nb ; i++)
    {
        printf("Veuillez rentrer le nombre %d : \n",i);
        scanf("%d",&temp); // valeur rentrée au clavier 

            if ( i == 1)
                somme_d += temp ; // on met la 1 ere valeur dans la somme pour ensuite pouvoir diviser
            else
                somme_d /= temp ;
    }

    return(somme_d);
}

int Produit()
{
    int nb, temp;
    int somme_m = 0;
    printf("Combien de nombre voulez vous multiplier ? \n");
    scanf("%d",&nb);

    for ( int i=1 ; i <= nb ; i++)
    {
        printf("Veuillez rentrer le nombre %d : \n",i);
        scanf("%d",&temp); // valeur rentrée au clavier 

            if ( i == 1)
                somme_m += temp ; 
            else
                somme_m *= temp ;
    }

    return(somme_m);
}

int Soustraction()
{
    int nb, temp;
    int somme_s = 0;
    printf("Combien de nombre voulez vous soustraire ? \n");
    scanf("%d",&nb);

    for ( int i=1 ; i <= nb ; i++)
    {
        printf("Veuillez rentrer le nombre %d : \n",i);
        scanf("%d",&temp); // valeur rentrée au clavier 

            if ( i == 1)
                somme_s += temp ; 
            else
                somme_s -= temp ;
    }

    return(somme_s);
}

int Addition()
{
    int nb, temp;
    int somme_a = 0;
    printf("Combien de nombre voulez vous additionner ? \n");
    scanf("%d",&nb);

    for ( int i=1 ; i <= nb ; i++)
    {
        printf("Veuillez rentrer le nombre %d : \n",i);
        scanf("%d",&temp); // valeur rentrée au clavier 

            if ( i == 1)
                somme_a += temp ; 
            else
                somme_a += temp ;
    }

    return(somme_a);

}

void Calculatrice(int nbr)
{
    
    switch(nbr)
    {
        case 1:
            printf("L'addition de ces nombres donnent : %d",Addition());
            break;
        case 2: 
            printf("La soustraction de ces nombres donnent : %d",Soustraction());
            break;
        case 3: 
            printf("Le produit de ces nombres est : %d",Produit());
            break;
        case 4: 
            printf("La division de ces nombres est : %d",Division());
            break;
        case 5:
            printf("La racine carre de ce nombre est : %.2f",Racine_carree());
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

int main()
{
    int choix;
    menu();
    printf("Entrer votre choix : \n");
    scanf("%d",&choix);
    Calculatrice(choix);

    return 0;
}
