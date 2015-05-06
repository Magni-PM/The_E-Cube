#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "Affichage.h"

#define LARGEUR 500
#define HAUTEUR 400
#define DELAY 5000

void affichageSDL(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle);

void affichageFaceB (int faceB[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
void affichageFaceG (int faceG[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
void affichageFaceO (int faceO[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
void affichageFaceR (int faceR[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
void affichageFaceY (int faceY[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
void affichageFaceW (int faceW[3][3],SDL_Renderer *interp,SDL_Rect rectangle);

void Affichage(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3])
{
	int ret = SDL_Init(SDL_INIT_VIDEO);
	if (ret<0)
	{
		fprintf(stderr,"ERREUR SDL : %s",SDL_GetError());
		exit(1);
	}
	
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
	
	SDL_Renderer *interp = SDL_CreateRenderer(fenetre, -1,0);
	
	if(interp == NULL) 
	{
		fprintf(stderr,"Impossible de créer l'interpréteur graphique: %s",
		SDL_GetError()); exit(1);
	}
	
	SDL_Rect rectangle;/* C'est une structure :-) */
	rectangle.x=10;
	rectangle.y=140;
	rectangle.w=38;
	rectangle.h=38;
	
	
	
	affichageSDL(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle);
}


void affichageSDL(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle)
{
	SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */0,/* A */255);
	SDL_RenderClear(interp);
	
	//SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
	/*rectangle.x=0;
	rectangle.y=0;
	rectangle.w=38;
	rectangle.h=38;
	SDL_RenderFillRect (interp, &rectangle);*/
	
	affichageFaceB(faceB, interp, rectangle);
	affichageFaceO(faceO, interp, rectangle);
	affichageFaceG(faceG, interp, rectangle);
	affichageFaceY(faceY, interp, rectangle);
	affichageFaceR(faceR, interp, rectangle);
	affichageFaceW(faceW, interp, rectangle);
	
	SDL_RenderPresent(interp);
	SDL_Delay(DELAY);
	SDL_DestroyWindow(fenetre);
	SDL_Quit();
}

void affichageFaceB (int faceB[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceB[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}

void affichageFaceW (int faceW[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceW[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=260+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}

void affichageFaceR (int faceR[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceR[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=250+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}


void affichageFaceO (int faceO[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceO[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=10+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}

void affichageFaceG (int faceG[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceG[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=370+(j*40);
				rectangle.y=140+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}

void affichageFaceY (int faceY[3][3],SDL_Renderer *interp,SDL_Rect rectangle)
{

	int i,j;
	int tamp = 0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	
			tamp = faceY[i][j];

			if( ((tamp == 11)) || (tamp == 12) || (tamp == 13) || (tamp == 14) || (tamp == 15) || (tamp == 16) || (tamp == 17) || (tamp == 18) || (tamp == 19) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 21)) || (tamp == 22) || (tamp == 23) || (tamp == 24) || (tamp == 25) || (tamp == 26) || (tamp == 27) || (tamp == 28) || (tamp == 29) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */127,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 31)) || (tamp == 32) || (tamp == 33) || (tamp == 34) || (tamp == 35) || (tamp == 36) || (tamp == 37) || (tamp == 38) || (tamp == 39) )
			{
				SDL_SetRenderDrawColor(interp,/* R */0,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 41)) || (tamp == 42) || (tamp == 43) || (tamp == 44) || (tamp == 45) || (tamp == 46) || (tamp == 47) || (tamp == 48) || (tamp == 49) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */0,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 51)) || (tamp == 52) || (tamp == 53) || (tamp == 54) || (tamp == 55) || (tamp == 56) || (tamp == 57) || (tamp == 58) || (tamp == 59) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */0,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
			
			else if( ((tamp == 61)) || (tamp == 62) || (tamp == 63) || (tamp == 64) || (tamp == 65) || (tamp == 66) || (tamp == 67) || (tamp == 68) || (tamp == 69) )
			{
				SDL_SetRenderDrawColor(interp,/* R */255,/* V */255,/* B */255,/* A */255);
				rectangle.x=130+(j*40);
				rectangle.y=20+(i*40);
				SDL_RenderFillRect (interp, &rectangle);
			}
		}
}


