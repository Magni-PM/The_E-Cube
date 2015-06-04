#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>
#include "Affichage.h"
#include "Commande.h"


void Affichage(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle,int *etat)
{
	
	
	SDL_SetRenderDrawColor(interp,/* R */0,/* V */0,/* B */0,/* A */255);
	SDL_RenderClear(interp);
	
	affichageFaceB(faceB, interp, rectangle);
	affichageFaceO(faceO, interp, rectangle);
	affichageFaceG(faceG, interp, rectangle);
	affichageFaceY(faceY, interp, rectangle);
	affichageFaceR(faceR, interp, rectangle);
	affichageFaceW(faceW, interp, rectangle);
	
	if(*etat==0)
		ecritureMenu(interp);
	else if(*etat==2)
		ecritureModmanu(interp);
	

	SDL_RenderPresent(interp);
	SDL_Delay(DELAY);
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

void ecriture(SDL_Renderer *interp, char *texte, char *police, int x, int y, int w, int h, int R, int G, int B)
{
	TTF_Font* Police = TTF_OpenFont(police, 100); 	
	SDL_Color couleur = {R,G,B};
	SDL_Surface* surfaceMessage = TTF_RenderText_Blended(Police, texte, couleur); 
	SDL_Texture* Message = SDL_CreateTextureFromSurface(interp, surfaceMessage); 
	
	SDL_Rect Message_rect; 
	Message_rect.x = x;  
	Message_rect.y = y; 
	Message_rect.w = w;
	Message_rect.h = h;

	SDL_RenderCopy(interp, Message, NULL, &Message_rect); 
	SDL_RenderPresent(interp);
	TTF_CloseFont(Police); 
}

void ecritureMenu(SDL_Renderer *interp)
{
	//parametre de la fonction ecriture
	int x=0,y=0,w=0,h=0,R=0,G=0,B=0;
	char *texte = NULL;
	char *police = NULL;
	
	//initialisation de la TTF
	if(TTF_Init() == -1)
	{
	fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
	exit(EXIT_FAILURE);
	}
	
	//texte "intro"
	x=20;y=420;w=341;h=15;R=255;G=255;B=255;
	texte="Bonjour que voulez-vous faire ?";police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte modmanu
	x=20;y=460;w=286;h=15;R=255;G=255;B=255;
	texte="Modification manuelle -> "Modification_manuelle;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte melange alea
	x=20;y=480;w=242;h=15;R=255;G=255;B=255;
	texte="Melange aleatoire -> "Melange_aleatoire;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte resolution
	x=20;y=500;w=165;h=15;R=255;G=255;B=255;
	texte="Resolution -> "Resolution;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte quitter
	x=20;y=620;w=143;h=15;R=255;G=255;B=255;
	texte="Quit -> ECHAP";police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);	
	

	SDL_RenderPresent(interp);
	TTF_Quit();
}

void ecritureModmanu(SDL_Renderer *interp)
{
	//parametre de la fonction ecriture
	int x=0,y=0,w=0,h=0,R=0,G=0,B=0;
	char *texte = NULL;
	char *police = NULL;
	
	//initialisation de la TTF
	if(TTF_Init() == -1)
	{
	fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
	exit(EXIT_FAILURE);
	}
	
	//texte "intro"
	x=20;y=420;w=396;h=15;R=255;G=255;B=255;
	texte="Quelle operation voulez-vous faire ?";police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte rotation face bleu
	x=20;y=460;w=99;h=15;R=0;G=0;B=255;
	texte="Bleu -> "BLUE;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=460;w=121;h=15;R=0;G=0;B=255;
	texte="Bleu_I -> "BLUE_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte rotation face orange
	x=20;y=480;w=121;h=15;R=255;G=127;B=0;
	texte="Orange -> "ORANGE;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=480;w=143;h=15;R=255;G=127;B=0;
	texte="Orange_I -> "ORANGE_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte rotation face bleu
	x=20;y=500;w=110;h=15;R=0;G=255;B=0;
	texte="Green -> "GREEN;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=500;w=132;h=15;R=0;G=255;B=0;
	texte="Green_I -> "GREEN_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte rotation face rouge
	x=20;y=520;w=88;h=15;R=255;G=0;B=0;
	texte="Red -> "RED;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=520;w=110;h=15;R=255;G=0;B=0;
	texte="Red_I -> "RED_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte rotation face jaune
	x=20;y=540;w=121;h=15;R=255;G=255;B=0;
	texte="Yellow -> "YELLOW;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=540;w=143;h=15;R=255;G=255;B=0;
	texte="Yellow_I -> "YELLOW_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte rotation face blanche
	x=20;y=560;w=110;h=15;R=255;G=255;B=255;
	texte="White -> "WHITE;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	x=270;y=560;w=132;h=15;R=255;G=255;B=255;
	texte="White_I -> "WHITE_I;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);

	//texte aide
	x=20;y=620;w=99;h=15;R=255;G=255;B=255;
	texte="Help -> "HELP;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);
	
	//texte retour
	x=270;y=620;w=121;h=15;R=255;G=255;B=255;
	texte="Return -> "RETURN;police="bla.ttf";
	ecriture(interp,texte,police,x,y,w,h,R,G,B);


	SDL_RenderPresent(interp);
	TTF_Quit();
}

