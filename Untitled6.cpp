#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main() {
	float a,b,add,div,multp,sous;
	printf("veuillez entrer a  : ");
	scanf("%f",&a);
	printf("veuillez entrer b : ");
	scanf("%f",&b);
	add=a+b;
	div=a/b;
	sous=a-b;
	multp=a*b;
	printf("a+b = %.2f \n",add);
	printf("a*b = %.2f \n",multp);
	printf("a-b = %.2f \n",sous);
	printf("a/b = %.2f \n",div);
	
	return 0;
}
