#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int puissance (int n) {
    int p;
    p=n*n;
   return p;
    
}
int main() {
    int n,p;
    printf("veuillez sasir la valeur de n : ");
    scanf("%d",&n);
    p=puissance(n);
     printf("la puissance de %d est : %d ",n,p);
    return 0;
}
