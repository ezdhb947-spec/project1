#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int n,i,s=0;
	printf("entrer n : ");
	scanf("%d",&n);
 for(i=1;i<=n;i++){
 	s=s+i;
 }
 printf("la somme des %d premiers nombres est = %d",n,s);
	return 0;
}
