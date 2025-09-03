#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int n,i=0,tab[i],s=0;
	printf("entrer le nombre d'elements du tableau :");
	scanf("%d",&n);
		printf("entrer les elements du tableau :");
  while(i<n){
  	printf("tab[%d] = ",i);
  	scanf("%d",&tab[i]);
  	s=s+tab[i];
  	i++;
  }
  printf("la somme des valeurs est : %d",s);
  
	return 0;
}
