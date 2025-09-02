#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int a,b;
	printf("entrer a:");
	scanf("%d",&a);
	printf("entrer b:");
	scanf("%d",&b);
	if(a==b) {
		printf("a et b sont identiques,le triple de la somme est : %d",(a+b)*3);
	}
	else {
		printf("la sommes de aet b est : %d",a+b);
	}
	
	return 0;
}
