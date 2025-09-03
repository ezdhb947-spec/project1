#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int n,i;
	printf("n : ");
	scanf("%d",&n);
	printf("n = %d , les 10 premiers nombres impaire sont : ",n);
	for(i=1;i<=n;i++){
			
		printf("%d \t",(2*i)-1);
	}
	return 0;
}
