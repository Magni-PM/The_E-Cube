#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "operation.h"
#include "Affichage.h"


void MelangeAleatoire(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3],int nbEtapes, int nbModAlea){
	int optodo;
	int nbMod;

	system("clear");
	Affichage(faceB, faceO, faceG, faceR, faceY, faceW);
	printf("Nombres de modification aleatoires voulues ?\n");
	scanf("%d", &nbMod);

	FILE* etapes = NULL;
	etapes = fopen("etapes.txt", "w+");
	if (etapes == NULL)
		perror("Impossible de creer le fichier\n");

	srand(time(NULL));
	//variables
	int i =0;
	int nombre_aleatoire;
	int TableauConversion[12] = {1, 11, 2, 22, 3, 33, 4, 44, 5, 55, 6, 66};
	for(i=0;i<nbMod;i++)
	{
		nombre_aleatoire= rand()%12;
		optodo = TableauConversion[nombre_aleatoire];

		//sauvegarde dans un fichier .txt des combinaison aleatoires effectues
		fprintf(etapes, "rand %d = %d => %d\n", i, nombre_aleatoire, optodo);
	
		operation(optodo,faceB, faceO, faceG, faceR, faceY, faceW);
		nbModAlea ++;
	}
	fclose(etapes);
}


void CubeManuel (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int nbModAlea){
	int ChoixOperation;
	
	for(;;)
	{
		system("clear");
		Affichage(faceB, faceO, faceG, faceR, faceY, faceW);
		
		printf("\n \n \nQuels modifications ?\n1=UP   11=UPi\n");
		printf("2=R    22=Ri\n");
		printf("3=L    33=Li\n");
		printf("4=D    44=Di\n");
		printf("5=B    55=Bi\n");
		printf("6=F    66=Fi\n");
		
		int retscanf;
		retscanf = scanf("%d", &ChoixOperation);
		/* ne pas oublier de vider le buffer après la saisie */
		scanf ("%*[^\n]");
		getchar ();
		
		/* vérification de la saisie */
		if (retscanf == 1)
		{
			if (ChoixOperation == 0)
			    return;
			    
			operation(ChoixOperation,faceB, faceO, faceG, faceR, faceY, faceW);
			nbEtapes++;
		}
		else {
			printf("erreur de saisi\n");
		}	
	}
}


void ModificationFromTxt(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3]){
	char e[2];
	int optodo;
	int nsamples = 0; //nombre d'opération

	//ouverture du fichier et verification qu'il n'y a pas eu d'erreur à ce niveau
	FILE* modin = NULL;
	modin = fopen("Modification.txt", "r");
	if (modin == NULL)
	{
		perror("Erreur au niveau du fichier 'Modification.txt'");
		exit(1);
	}

	//boucle de lecture du fichier .txt
	while(nsamples < 100 && fscanf(modin, "%s", e)!=EOF){
		nsamples++;
		if (strcmp(e, "U") == 0)
			optodo = 1;
		else if (strcmp(e, "Ui")==0)
			optodo = 11;
		else if (strcmp(e, "R")==0)
			optodo = 2;
		else if (strcmp(e, "Ri")==0)
			optodo = 22;
		else if (strcmp(e, "L")==0)
			optodo = 3;
		else if (strcmp(e, "Li")==0)
			optodo = 33;
		else if (strcmp(e, "D")==0)
			optodo = 4;
		else if (strcmp(e, "Di")==0)
			optodo = 44;
		else if (strcmp(e, "B")==0)
			optodo = 5;
		else if (strcmp(e, "Bi")==0)
			optodo = 55;
		else if (strcmp(e, "F")==0)
			optodo = 6;
		else if (strcmp(e, "Fi")==0)
			optodo = 66;
		else {
			printf("il y a une erreur a la ligne %d du fichier Modification.txt \n", nsamples);
			break;
		}

		operation(optodo,faceB, faceO, faceG, faceR, faceY, faceW);
	}
	fclose(modin);
	printf("nsamples : %d\n", nsamples);

}
