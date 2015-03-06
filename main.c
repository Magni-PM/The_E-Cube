#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "Affichage.h"
#include "ModificationCube.h"
#include "operation.h"
#include "rotation.h"

int main(){
	//declaration état initial Rubik's Cube
	float faceB[3][3] = {{1.1, 1.2, 1.3} , {1.4, 1.5, 1.6} , {1.7,1.8,1.9}}; //face Bleu face a nous
	float faceO[3][3] = {{2.1, 2.2, 2.3} , {2.4, 2.5, 2.6} , {2.7,2.8,2.9}}; //face Orange a gauche
	float faceG[3][3] = {{3.1, 3.2, 3.3} , {3.4, 3.5, 3.6} , {3.7,3.8,3.9}}; //face Verte derriere
	float faceR[3][3] = {{4.1, 4.2, 4.3} , {4.4, 4.5, 4.6} , {4.7,4.8,4.9}}; //face Rouge a droite
	float faceY[3][3] = {{5.1, 5.2, 5.3} , {5.4, 5.5, 5.6} , {5.7,5.8,5.9}}; //face Jaune au dessus
	float faceW[3][3] = {{6.1, 6.2, 6.3} , {6.4, 6.5, 6.6} , {6.7,6.8,6.9}}; //face Blanche en dessous
	
	int nbEtapes = 0; //compteur nombre de modification que nous avons faites sur le cube
	int nbModAlea = 0; //nombre de modification aleatoires que nous avons faites sur le cube
	
	printf("The E_Cube\n");
	printf("\nTout au long du programme, entrez 0 to quit\n");
	//getchar();
	
	int choixmenu;
	
	
	for(;;) //boucle infinie
	{
		//system("clear"); //on efface la console pour gagner en lisibilite
		Affichage(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, nbModAlea); //fonction affichage du cube dans l'etat actuel
		printf("***Menu***\n");
		printf("   Melanger le cube = 1\n   Cube Manuel = 2\n   Modifier depuis fichier.txt = 3 \n   Quit = 0\n");
		int retscanf;
		retscanf = scanf("%d", &choixmenu);
		/* ne pas oublier de vider le buffer après la saisie */
		scanf ("%*[^\n]");
		getchar ();
		
		/* vérification de la saisie */
		if (retscanf == 1){
			switch(choixmenu){
			case 0 :
				exit(0);
				break;
			case 1 :
				MelangeAleatoire(faceB, faceO, faceG, faceR, faceY, faceW,nbEtapes, nbModAlea);
				system("gedit etapes.txt");
				break;
			case 2 :
				CubeManuel(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, nbModAlea);
				break;
			case 3 :
				ModificationFromTxt(faceB, faceO, faceG, faceR, faceY, faceW);
				system("gedit modification.txt");
				break;
			default :
				printf("Veuillez entrer une valeur correcte\n");
				break;
			}
		}
		else
			printf("\n\n\n**********************erreur de saisi veuillez entrer une valeur correct*************************\n\n\n");
			
	}
	
	
}

