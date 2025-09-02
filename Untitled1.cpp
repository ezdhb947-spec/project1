#include <stdio.h>
#include <stdlib.h>
int main() {
	
	char nom[20];
	char prenom[20];
	int age;
	char sexe[2];
	char email[50];
	
  printf("veuillez entrer votre nom : ");
  scanf("%s",&nom);
  
  printf("veuillez entre votre prenom : ");
  scanf("%s",&prenom);
  
  printf("veuillez entrer votre age : ");
  scanf("%d",&age);
  
  printf("veuillez choisir votre sexe f/h : ");
  scanf("%s",&sexe);
  
  printf("veuillez entrer votre email: ");
  scanf("%s",&email);
  
  printf("nom : %s \n",nom);
  printf("prenom : %s \n",prenom);
  printf("age : %d \n",age);
  printf("sexe : %s \n",sexe);
  printf("email : %s \n",email);
 return 0;
}
