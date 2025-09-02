#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float a,b,c,d;
	printf("veuillez entrer la 	1ER note : ");
	scanf("%f",&a);
	printf("veuillez entrer la 	2Eme note : ");
	scanf("%f",&b);
	printf("veuillez entrer la 	3Eme note : ");
	scanf("%f",&c);
	d=pow(a*b*c,1/3);
	printf("la moyenne est : %.2f ",d);
	
	return 0;
}
