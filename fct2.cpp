#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void signe(int a,int b){
	if (a*b){
		printf("a et b  sont  de meme signe \n");
	}
	else{
		printf("a et b ne sont pas de meme signe \n");
	}
    
}
int minimum(int a,int b){
	int min;
	if (a<b)
	min=a;
	else
	min=b;
	return min;
}
int maximum(int a,int b){
	int max;
	if(a>b)
		max=a;
	else
		max=b;
		return max;
	
}


int main() {
	
	int max,min;
	int a,b;
	printf("veuillez entrer a : ");
	scanf("%d",&a);
	printf("veuillez entrer b : ");
	scanf("%d",&b);
	signe(a,b);
	min=minimum(a,b);
	max=maximum(a,b);
	 printf(" la valeur minimale est : %d \n",min);
	  printf(" la valeur maximale est : %d \n",max);
	
	return 0;
}
