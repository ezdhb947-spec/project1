#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	float a,b;
	printf("veuiller entrer la Distance en km : ");
	scanf("%f",&a);
	b=a*1093.61;
	printf("la Distance en yards est : %.2f",b);
	return 0;
}
