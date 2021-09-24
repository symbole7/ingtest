#include <stdio.h>
#include <math.h>

void menu()
{
printf("----Entrer votre choix ----\n"); 
printf("1-Addition--\n"); 
printf("2-Soustraction--\n"); 
printf("3-Multiplication--\n"); 
printf("4-Division--\n"); 
printf("5-Racine carrée--\n"); 
printf("6-Puissance--\n"); 
printf("7-Quitter--\n"); 
}

float addition(float x, float y)
{
float res;
res = x + y;
return res;
}

float soustraction(float x, float y)
{
float res;
res = x - y;
return res;
}

float muliplication(float x, float y)
{
float res;
res = x * y;
return res;
}

float division(float x, float y)
{
float res;
res = x/y;
return res;
}

float racine_carree(float x)
{
float res;
res = sqrt(x);
return res;
}

float puissance(float x, float i)
{
float res;
res = pow(x,i);
return res;
}

void claculatrice(int a)
{

float x,y;
switch(a)
	{
	case 1: 
		printf("--Addition--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		printf("Entrer la valeur de y : "); scanf("%f",&y); 
		printf(" x + y = %f \n", addition(x,y));
		break;
		
	case 2: 
		printf("--Soustraction--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		printf("Entrer la valeur de y : "); scanf("%f",&y); 
		printf(" x + y = %f \n", soustraction(x,y));
		break;
		
	case 3: 
		printf("--Multiplication--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		printf("Entrer la valeur de y : "); scanf("%f",&y); 
		printf(" x * y = %f \n", muliplication(x,y));
		break;
		
	case 4: 
		printf("--Division--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		do{
		printf("Entrer la valeur de y : "); scanf("%f",&y); 
		if(y==0) printf("la valeur de y doit être différente de 0 \n");
		}while(y==0);
		printf(" x / y = %f \n", division(x,y));
		break;
		
	case 5: 
		printf("--Racine carrée--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		printf("Racine carrée de x = %f \n", racine_carree(x));
		break;
		
	case 6: 
		printf("--Puissance--\n"); 
		printf("Entrer la valeur de x : "); scanf("%f",&x); 
		printf("Entrer la valeur de la puissance y : "); scanf("%f",&y); 
		printf("x^y = %f \n", puissance(x,y));
		break;
		
	case 7: 
		printf("--Quitter--\n"); 
		break;
		
	default: 
		printf("--Choissir une valeur de 1 à 7--\n"); 
	}
}

int main()
{

int choix;
do
{
menu();
printf("Entrer votre choix :"); scanf("%d",&choix);
claculatrice(choix);
}while(choix !=7);

return 0;
}
