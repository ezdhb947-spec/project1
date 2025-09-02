#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int a,b;
	printf("veuillez entrer l'annee : ");
	scanf("%d",&a);
	printf("convertir en  : \n");
	printf("1- Mois \n");
	printf("2- Jours \n");
	printf("3- Heures \n");
	printf("4- Minutes \n");
	printf("5- Secondes \n");
	scanf("%d",&b);
	switch (b){
		case 1:printf("%d mois",a*12);
		break;
        case 2:printf("%d jours",a*365);
		break;
		case 3:printf("%d heures",a*24);
		break;
		case 4:printf("%d minutes",a*365*24*60);
		break;
		case 5:printf("%d secondes",a*365*24*60*60);
		break;
		default:printf("choix invalide");
	}
	return 0;
}
