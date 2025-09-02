#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int a;
	printf("veuillez entrer la temperature d'eau en celsius :");
	scanf("%d",&a);
	 if (a<0){
	 	printf("l'etat est solide .");
	 }
	 else if (0<=a<	100) {
	 	printf("l'etat est liquide .");
	 }
	 else {
	 	printf("l'etat est gazeux");
	 }
	return 0;
}
