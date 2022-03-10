#include<stdio.h>
#include<string.h>
//1. Définir les structures date et composant.

typedef struct {
    int jour ;
    int mois ;
    int annee ;
}DATE;


typedef struct {
    int code ;
    char nom[10];
    char classe[5];
    char fabricant[10];
    DATE Date_fab ;
}COMPOSANT;

//2. Ecrire une fonction qui saisit une date.

DATE saisirDate(DATE *d){
    
    printf("veuillez saisir une date  \n le jour : ");
    scanf("%d",&d->jour );
    printf("\n le mois : ");
    scanf("%d",&d->mois);
    printf(" \n l'annee' : ");
    scanf("%d",&d->annee );
    
    
    
};

//3. Ecrire une fonction qui affiche une date.

DATE afficherDate(DATE d){
	
    printf("la date est %d / %d / %d : " ,d.jour,d.mois,d.annee);
    
};

//4. Ecrire une fonction qui saisit un composant.

COMPOSANT saisirComposant(COMPOSANT *C){
    
    printf("\n veuillez saisir les composant \n le code : ");
    scanf("%d",&C->code );
    printf("\n le nom : ");
    scanf("%s",&C->nom);
    printf(" \n la classe : ");
    scanf("%s",&C->classe );
    printf(" \n fabricant : ");
    scanf("%s",&C->fabricant );
    printf(" \n Date_fab: \n jour :  ");
    scanf("%d",&C->Date_fab.jour);
 	printf(" \n mois :");
    scanf("%d",&C->Date_fab.mois);
	printf(" \n annee:  ");
    scanf("%d",&C->Date_fab.annee);
    
    
    
    
};

//5. Ecrire une fonction qui affiche un composant

COMPOSANT afficherComposant(COMPOSANT C){
	
    printf("le code est : %d " , C.code);
    printf("le nom est : %s " , C.nom);
    printf("classe est : %s " , C.classe);
    printf("le fabricant est : %s ", C.fabricant);
    printf("Date_fab est : %d / %d / %d", C.Date_fab.jour,C.Date_fab.mois,C.Date_fab.annee);
    
};

//6. Ecrire une fonction qui saisit un tableau de composants.

COMPOSANT saisirtab(COMPOSANT tab[2]){
	
	
	for(int i=0;i<2;i++){
		printf("\n veuillez saisir les composant \n le code : ");
	    scanf("%d",&tab[i].code );
	    printf("\n le nom : ");
	    scanf("%s",&tab[i].nom);
	    printf(" \n la classe : ");
	    scanf("%s",&tab[i].classe );
	    printf(" \n fabricant : ");
	    scanf("%s",&tab[i].fabricant );
	    printf(" \n Date_fab: \n jour :  ");
   	 	scanf("%d",&tab[i].Date_fab.jour);
 		printf(" \n mois :");
    	scanf("%d",&tab[i].Date_fab.mois); 
		printf(" \n annee:  ");
    	scanf("%d",&tab[i].Date_fab.annee);
	}
	
}
//7. Ecrire une fonction qui affiche un tableau de composants.

COMPOSANT affichertab(COMPOSANT tab[2]){
	

		for(int i=0;i<2;i++){
	    printf("le code est : %d " , tab[i].code);
	    printf("le nom est : %s " , tab[i].nom);
	    printf("classe est : %s " , tab[i].classe);
	    printf("le fabricant est : %s ", tab[i].fabricant);
	    printf("Date_fab est : %d / %d / %d", tab[i].Date_fab.jour,tab[i].Date_fab.mois,tab[i].Date_fab.annee);
	}
    
};

//8. Ecrire le programme principal qui réalise le scénario suivant :
		
COMPOSANT saisirtabdy(COMPOSANT tab[]){
	
	// Déclaration d'un tableau dynamique de composantes :
	
int n;
	
printf("veuillez saisir la dimension du tableau: ");
	scanf("%d",&n);

	//Saisie d'un tableau de composants:

	for(int i=0;i<n;i++){
		printf("\n veuillez saisir les composant \n le code : ");
	    scanf("%d",&tab[i].code );
	    printf("\n le nom : ");
	    scanf("%s",&tab[i].nom);
	    printf(" \n la classe : ");
	    scanf("%s",&tab[i].classe );
	    printf(" \n fabricant : ");
	    scanf("%s",&tab[i].fabricant );
	    printf(" \n Date_fab: \n jour :  ");
   	 	scanf("%d",&tab[i].Date_fab.jour);
 		printf(" \n mois :");
    	scanf("%d",&tab[i].Date_fab.mois); 
		printf(" \n annee:  ");
    	scanf("%d",&tab[i].Date_fab.annee);
	}
	
}
	//Affichage d'un tableau de composants :
COMPOSANT affichertabdy(COMPOSANT tab[]){
	
int n ;
	for(int i=0;i<n;i++){
	    printf("le code est : %d " , tab[i].code);
	    printf("le nom est : %s " , tab[i].nom);
	    printf("classe est : %s " , tab[i].classe);
	    printf("le fabricant est : %s ", tab[i].fabricant);
	    printf("Date_fab est : %d / %d / %d", tab[i].Date_fab.jour,tab[i].Date_fab.mois,tab[i].Date_fab.annee);
	}
    
};

//9. Ecrire une fonction qui calcule le nombre de composants réalisés par un fabricant donne:
void nombrebComposantFabricant(COMPOSANT tab[]){
	int count=0;
	int d;
	char nbrCom[5];

	printf("Veuillez saisr le nom de fabrication: ");
	scanf("%s",&nbrCom);
	
	printf("veuillez saisir la dimension du tableau: ");
	scanf("%d",&d);
	
	for(int i=0;i<d;i++){
			
		if(strcmp(tab[i].fabricant,nbrCom)==0){
			count++;
		}		
	}

printf("le nombre de composants réalisés par un fabricant donne est :%d \n",count);	
}


int main(){
	
int n , sta=2 ,s ;
    //COMPOSANT c;
    COMPOSANT tab[s];
    DATE d;
    //saisirDate(&d);
    //afficherDate(d);
   	//saisirComposant(&c);
    //afficherComposant(c);
    //saisirtab(&tabb[sta]);
    //affichertab(&tabb[sta]);
    //saisirtabdy(&tabb[n]);
    //affichertabdy(&tabb[n]);
    nombrebComposantFabricant(&tab[s]);
	
    
}
