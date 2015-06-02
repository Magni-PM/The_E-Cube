#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <SDL2/SDL.h>

#include "Affichage.h"
#include "operation.h"
#include "rotation.h"
#include "resolution.h"


void Resolution (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle, int *etat){
    
    int tabop[5];//tableau pour stocker les differentes operation a effectuer    
    int *nbop = malloc(sizeof(int));
    
    //on realise la croix bleue
    CroixBleu (faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat );
    
    
}

void RealisationOperation (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, int tabop[5], int  *nbop, SDL_Window *fenetre, SDL_Renderer *interp, SDL_Rect rectangle, int *etat){
    
    int i;
    
    //on lit le tableau pour effectuer les operation
    for (i=0; i < *nbop; i++){
        *choixOperation = tabop[i];
        operation(choixOperation,faceB, faceO, faceG, faceR, faceY, faceW);
        
        //on affiche pas a pas la resolution
        Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle, etat);
        SDL_Delay (200);
    }
} 
        

void CroixBleu (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, int tabop[5], int  *nbop, SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle, int *etat){
    
    //resolution du milieu 12
    if (faceB[0][1] == 12)
        printf("oh yeah!!!!!\n");
   
    else if(faceB[1][0] == 12){
        tabop[0] = 6;
         *nbop = 1;
    }
    
    RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);

}
