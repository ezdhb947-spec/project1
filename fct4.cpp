#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void puissance(int a){
	int c;
	c=a*a*a;
	printf("le cube du nombre saisie est : %d",c);
}

int main() {
	int a;
	printf("veuillez entrer un nombre : ");
	scanf("%d",&a);
	puissance(a);
	
	
	return 0;
}

