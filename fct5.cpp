#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void annee(int a){
	if (a%4==0 && a%100!=0){
		printf("l'annee est bissextile .");
	}
	else if (a%400==0){
		printf("l'annee est bissextile .");
	}
	
	else printf("l'annee est commune .");
}



int main() {
	int a;
	printf("veuillez entrer l'annee a examiner : ");
	scanf("%d",&a);
	annee(a);
	return 0;
}
