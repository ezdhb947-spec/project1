#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int tab[5];
	tab[0]=1;
	tab[1]=2;
	tab[2]=3;
	tab[3]=4;
	tab[4]=5;
	int i=0;
	
	while(i<5){
		printf("tab[%d] = %d \n",i,tab[i]);
		i++;
	}
	
	return 0;
}
