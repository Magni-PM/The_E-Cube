#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL/SDL_ttf.h>

#include "Affichage.h"
#include "ModificationCube.h"
#include "operation.h"
#include "rotation.h"
#include "GestionEvents.h"
#include "resolution.h"
#include "init.h"


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
	
	int *etat = malloc(sizeof(int)); //variable de niveaux dans les menus
	*etat = 0;
	
	int *choixOperation = malloc(sizeof(int)) ;
	

	
//initialisation des différentes fonctions liées a la SDL
	
	Init_SDL_TTF();
	
	//creation de la fenetre
	SDL_Window *fenetre =
		SDL_CreateWindow("Test SDL",
				SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED,
				LARGEUR, HAUTEUR,0);
				
	if(fenetre == NULL) 
	{
		fprintf(stderr,"Impossible de créer une fenêtre %s\n",
		SDL_GetError()); exit(1);
	}

	//ouverture de la fenetre
	SDL_Renderer *interp = SDL_CreateRenderer(fenetre, -1,0);
	if(interp == NULL) 
	{
		fprintf(stderr,"Impossible de créer l'interpréteur graphique: %s",
		SDL_GetError()); exit(1);
	}

	//creation rectangle 
	SDL_Rect rectangle;/* C'est une structure :-) */
	rectangle.x=10;
	rectangle.y=140;
	rectangle.w=38;
	rectangle.h=38;
	
	

	//gestion des evenements
	SDL_Event events;
	//suppresion de la prise en compte de la souris
	SDL_EventState(SDL_MOUSEMOTION, SDL_DISABLE);
	int SDL_WaitEvent(SDL_Event* events);
	
	for(;;){ //boucle principale
	*choixOperation = 0;
	Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle, etat);
	GestionEvents(events, fenetre, etat, choixOperation);
	
		switch(*etat){
		case ETAT_MENU :
			Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle, etat);
			SDL_WaitEvent(&events);
			break;
			
		case ETAT_MODALEA :
			MelangeAleatoire(faceB, faceO, faceG, faceR, faceY, faceW,nbEtapes, nbModAlea, fenetre, interp, rectangle);
			Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle, etat);
			*etat = 0;
			break;
			
		case ETAT_MODMANU:
			operation(choixOperation,faceB, faceO, faceG, faceR, faceY, faceW);
			Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle,etat);
			SDL_WaitEvent(&events);
			break;
		
		case ETAT_RESOLUTION:
		    *etat = 0;
		    Resolution(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, fenetre, interp, rectangle, etat);
		    Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle,etat);
			break;
			
		default :
			break;
		}
	}
	return 0;
	
}
		
		
