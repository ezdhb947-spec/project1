#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;
	printf("veuillez entrer la valeur de a : ");
	scanf("%d",&a);
    if (a%2==0) {
    	printf("le nombre est paire .");
	}
	else {
		printf("lenombre est impaire .");
	}
	return 0;
}
