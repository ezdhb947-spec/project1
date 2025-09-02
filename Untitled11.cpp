#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	float a,b,c;
	printf("entrez la longueur du rectangle : ");
	scanf("%f",&a);
	printf("entrez la largeur du rectangle : ");
	scanf("%f",&b);
	c=a*b;
	printf("la surface du rectangle est : %.2f",c);
	
	
	
	return 0;
}
