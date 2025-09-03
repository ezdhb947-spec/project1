#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
int main() {
	char titre[100][20];
	char auteur[100][20];
	int prix[100];
	int quantite[100];
	int indice=0;
	int nbrlivre=0;
	int c;
	int pos;
	int i=0;
	char r;
	bool exist;
	
	
  while (c!=7){
 printf("veuillez choisir : \n");
 printf("1_ Ajouter un livre au stock. \n");
 printf("2_ Afficher tous les livres disponibles. \n");
 printf("3_ Rechercher un livre par son titre. \n");
 printf("4_ Mettre à jour la quantité d'un livre. \n");
 printf("5_ Supprimer un livre du stock. \n");
 printf("6_ Afficher le nombre total de livres en stock. \n");
 
 
 scanf("%d",&c);
 
 
     switch(c){
    	case 1:
     printf("veuillez entrer le titre du livre : ");
	 scanf("%s",&titre[indice]);
	 
	 printf("veuillez entrer l'auteur du livre : ");
	 scanf("%s",&auteur[indice]);
	 
	 printf("veuillez entrer le prix du livre : ");
	 scanf("%d",&prix[indice]);
	 
	 printf("veuillez entrer la quantite en stock : \n");
	 scanf("%d",&quantite[indice]);
	 
	  indice++;
	  nbrlivre++;
	  break;
	  
	  case 2: printf("les livres disponibles sont : \n");
	  if (nbrlivre==0){
	  	 printf("aucun livre n'est disponible");
	  }
       else { 
	   for(int i =0;i<indice;i++){
       	printf("%s \n %s \n %d \n %d \n",titre[i],auteur[i],prix[i],quantite[i]);
       	
	   }
	   }
		break;
		
		case 3: 
		printf("veuillez entrer le titre a rechercher : ");
		scanf("%s",&r);
		
		exist = false;
		
		for(i=0;i<indice;i++){
			
			if(strcmp(r, titre[i]==0) ){
			printf("il exist");
			exist = true;
			break;
				}
		}
		if(exist==false) 			printf("n exist pas");
		break;
		
	   
		case 5: printf("veuillez sasir la position de lelement a supprimer : ");
		scanf("%d",&pos);
		if ( i<=0 || i>indice){
			printf("position invalide, veuiller entrer une position entre 1 et %d \n",indice);
		}
		else {
			for(i=pos;i<indice;i++){
				
				
			}
			indice--;
			printf("element du tableau apres la supression sont : \n");
			
		}
		
	  
	  	
		  
		  
		  
		  
		  
		  }
 }
   
	return 0;
}
