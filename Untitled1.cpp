#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int a,b,c,x;
	int delta;
	printf("entrez la valeur de a : ");
	scanf("%d",&a);
	printf("entrez la valeur de b : ");
	scanf("%d",&b);
	printf("entrez la valeur de c : ");
	scanf("%d",&c);
	delta=pow(b,2)+4*a*c;
	if (delta<0){
		printf("2 sollutions possibles");
	}
	else if (delta==0){
		printf("une seule sollution possible ");
	}
	else {
		printf("2 sollutions possibles ");
	}
	return 0;
}
