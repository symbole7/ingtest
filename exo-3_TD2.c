#include <stdio.h>

int main()
{
    int x=0, y=0;
   /* do // on exécute au moins une seule fois l'instruction do 
{      // printf("%d ", x);
        x++;
}   while(x < y);
 // on va de 0 à 99 pour x=0 et y=100
 //pour (0,0) on a 0 || pour (0,1) on a 0 || pour (0,10) on a de 0 à 9 etc 
*/
    
    while(x<y) //si (0,0) alors ça n'affiche rien
{   
        printf("%d ", x);
        x++;
}
    return 0;
}