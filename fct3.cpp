#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


void mul(int x){
	int i=0;
	int r;
	if (x>0){
			for (i=0;i<=10;i++){
		r=x*i;
		printf("%d x %d = %d \n ",x,i,r);
	}
	}
	else {
		printf("choix indisponible .");
	}

}
int main() {
	int produit;
	int x;
	printf("veuillez entrer le nombre positif a multiplier : ");
	scanf("%d",&x);
	mul(x);
	
	
	return 0;
}
