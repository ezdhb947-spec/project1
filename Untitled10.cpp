#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	const float pi=3.14;
	float r,v;
	printf("veuillez entrer le rayo de la sphere : ");
	scanf("%f",&r);
	v=(4/3)*pi*pow(r,3);
	printf("le volume de la sphere est : %.2f",v);
	return 0;
}
