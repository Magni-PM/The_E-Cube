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
	int faceB[3][3] = {{11, 12, 13} , {14, 15, 16} , {17,18,19}}; //face Bleu face a nous
	int faceO[3][3] = {{21, 22, 23} , {24, 25, 26} , {27,28,29}}; //face Orange a gauche
	int faceG[3][3] = {{31, 32, 33} , {34, 35, 36} , {37,38,39}}; //face Verte derriere
	int faceR[3][3] = {{41, 42, 43} , {44, 45, 46} , {47,48,49}}; //face Rouge a droite
	int faceY[3][3] = {{51, 52, 53} , {54, 55, 56} , {57,58,59}}; //face Jaune au dessus
	int faceW[3][3] = {{61, 62, 63} , {64, 65, 66} , {67,68,69}}; //face Blanche en dessous
	
	int nbEtapes = 0; //compteur nombre de modification que nous avons faites sur le cube
	int nbModAlea = 0; //nombre de modification aleatoires que nous avons faites sur le cube
	
	printf("The E_Cube\n");
	printf("\nTout au long du programme, entrez 0 to quit\n");
	//getchar();
	
	int choixmenu;
	
	
	for(;;) //boucle infinie
	{
		//system("clear"); //on efface la console pour gagner en lisibilite
		Affichage(faceB, faceO, faceG, faceR, faceY, faceW); //fonction affichage du cube dans l'etat actuel
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

