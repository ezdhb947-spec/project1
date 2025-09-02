#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	float a,b;
	printf("veuiller entrer la temperature en celsius : ");
	scanf("%f",&a);
	b=a+273.15;
	printf("la temperature en kelvin : %.2f",b);
	return 0;
}
