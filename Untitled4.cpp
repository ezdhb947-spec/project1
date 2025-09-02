#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	float a,b;
	printf("veuiller entrer la vitesse en km/h : ");
	scanf("%f",&a);
	b=a*0.27778;
	printf("la vitesse en m/s est : %.2f",b);
	return 0;
}
