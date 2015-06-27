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
    
    int tabop[15]; //tableau pour stocker les differentes operation a effectuer
    
            
    int *nbop = malloc(sizeof(int));
    *nbop = 0;
    
    //on realise la croix bleue
    CroixBleu (faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat );
    CoinsBleus (faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat );
    
    
}

void RealisationOperation (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, int tabop[15], int  *nbop, SDL_Window *fenetre, SDL_Renderer *interp, SDL_Rect rectangle, int *etat){
    
    int i;
    
    //on lit le tableau pour effectuer les operation
    for (i=0; i < *nbop; i++){
        *choixOperation = tabop[i];
        operation(choixOperation,faceB, faceO, faceG, faceR, faceY, faceW);
        
        
        //on affiche pas a pas la resolution
        Affichage(faceB, faceO, faceG, faceR, faceY, faceW, fenetre, interp, rectangle, etat);
        SDL_Delay (50);
    }
} 
        

void CroixBleu (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, int tabop[15], int  *nbop, SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle, int *etat){
    
    /**************************************************************************
    *********************************milieu 12*********************************
    **************************************************************************/
    //cas de la piece sur la faceB *ok*
    if (faceB[0][1] == 12){
        tabop[0] = 0;
        *nbop = 1;
    }
   
    else if(faceB[1][0] == 12){
        tabop[0] = 6;
         *nbop = 1;
    }
    
    else if(faceB[1][2] == 12){
        tabop[0] = 66;
        *nbop = 1;
    }
    
    else if(faceB[2][1] == 12){
        tabop[0] = 6;
        tabop[1] = 6;
        *nbop = 2;
    }
    
    //cas de la piece sur la faceO *ok*
    else if (faceO[0][1] == 12){
        tabop[0] = 11;
        *nbop = 1;
    }
   
    else if(faceO[1][0] == 12){
        tabop[0] = 3;
        tabop[1] = 11;
         *nbop = 2;
    }
    
    else if(faceO[1][2] == 12){
        tabop[0] = 33;
        tabop[1] = 11;
        *nbop = 2;
    }
    
    else if(faceO[2][1] == 12){
        tabop[0] = 3;
        tabop[1] = 3;
        tabop[2] = 11;
        *nbop = 3;
    }
    
     //cas de la piece sur la faceG *ok*
    else if (faceG[0][1] == 12){
        tabop[0] = 1;
        tabop[1] = 1;
        *nbop = 2;
    }
   
    else if(faceG[1][0] == 12){
        tabop[0] = 5;
        tabop[1] = 1;
        tabop[2] = 1;
         *nbop = 3;
    }
    
    else if(faceG[1][2] == 12){
        tabop[0] = 55;
        tabop[1] = 1;
        tabop[2] = 1;
        *nbop = 3;
    }
    
    else if(faceG[2][1] == 12){
        tabop[0] = 5;
        tabop[1] = 5;
        tabop[2] = 1;
        tabop[3] = 1;
        *nbop = 4;
    }
    
     //cas de la piece sur la faceR *ok*
    else if (faceR[0][1] == 12){
        tabop[0] = 1;
        *nbop = 1;
    }
   
    else if(faceR[1][0] == 12){
        tabop[0] = 2;
        tabop[1] = 1;
        *nbop = 2;
    }
    
    else if(faceR[1][2] == 12){
        tabop[0] = 22;
        tabop[1] = 1;
        *nbop = 2;
    }
    
    else if(faceR[2][1] == 12){
        tabop[0] = 2;
        tabop[1] = 2;
        tabop[2] = 1;
        *nbop = 3;
    }
    
    //cas de la piece sur la faceY *ok*
    else if (faceY[0][1] == 12){
        tabop[0] = 1;
        tabop[1] = 22;
        tabop[2] = 66;
        *nbop = 3;
    }
   
    else if(faceY[1][0] == 12){
        tabop[0] = 3;
        tabop[1] = 6;
        *nbop = 2;
    }
    
    else if(faceY[1][2] == 12){
        tabop[0] = 22;
        tabop[1] = 66;
        *nbop = 2;
    }
    
    else if(faceY[2][1] == 12){
        tabop[0] = 1;
        tabop[1] = 3;
        tabop[2] = 6;
        *nbop = 3;
    }
    
    //cas de la piece sur la faceW *ok*
     else if (faceW[0][1] == 12){
        tabop[0] = 4;
        tabop[1] = 2;
        tabop[2] = 66;
        *nbop = 3;
    }
   
    else if(faceW[1][0] == 12){
        tabop[0] = 33;
        tabop[1] = 6;
        *nbop = 2;
    }
    
    else if(faceW[1][2] == 12){
        tabop[0] = 2;
        tabop[1] = 66;
        *nbop = 2;
    }
    
    else if(faceW[2][1] == 12){
        tabop[0] = 44;
        tabop[1] = 2;
        tabop[2] = 66;
        *nbop = 3;
    }
    
    if (tabop[0] != 0)
        RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);
    
    
    /**************************************************************************
    *********************************milieu 14*********************************
    **************************************************************************/
    //cas de la piece sur la faceB *ok*
    if(faceB[1][0] == 14){
        tabop[0] = 0;
        *nbop = 1;
    }
    
    else if(faceB[1][2] == 14){
        tabop[0] = 1;
        tabop[1] = 6;
        tabop[2] = 6;
        tabop[3] = 11;
        *nbop = 4;
    }
    
    else if(faceB[2][1] == 14){
        tabop[0] = 1;
        tabop[1] = 6;
        tabop[2] = 11;
        *nbop = 3;
    }
    
    //cas de la piece sur la faceO *ok*
    else if (faceO[0][1] == 14){
        tabop[0] = 11;
        tabop[1] = 66;
        tabop[2] = 1;
        *nbop = 3;
    }
   
    else if(faceO[1][0] == 14){
        tabop[0] = 3;
        tabop[1] = 11;
        tabop[2] = 66;
        tabop[3] = 1;
         *nbop = 4;
    }
    
    else if(faceO[1][2] == 14){
        tabop[0] = 33;
        tabop[1] = 11;
        tabop[2] = 66;
        tabop[3] = 1;
        *nbop = 4;
    }
    
    else if(faceO[2][1] == 14){
        tabop[0] = 66;
        tabop[1] = 4;
        tabop[2] = 6;
        *nbop = 3;
    }
    
     //cas de la piece sur la faceG *ok*
    else if (faceG[0][1] == 14){
        tabop[0] = 5;
        tabop[1] = 3;
        tabop[2] = 3;
        *nbop = 3;
    }
   
    else if(faceG[1][0] == 14){
        tabop[0] = 5;
        tabop[1] = 5;
        tabop[2] = 3;
        tabop[3] = 3;
         *nbop = 4;
    }
    
    else if(faceG[1][2] == 14){
        tabop[0] = 3;
        tabop[1] = 3;
        *nbop = 2;
    }
    
    else if(faceG[2][1] == 14){
        tabop[0] = 55;
        tabop[1] = 3;
        tabop[2] = 3;
        *nbop = 3;
    }
    
     //cas de la piece sur la faceR *ok*
    else if (faceR[0][1] == 14){
        tabop[0] = 1;
        tabop[1] = 66;
        tabop[2] = 11;
        *nbop = 3;
    }
   
    else if(faceR[1][0] == 14){
        tabop[0] = 2;
        tabop[1] = 1;
        tabop[2] = 66;
        tabop[3] = 11;
        *nbop = 4;
    }
    
    else if(faceR[1][2] == 14){
        tabop[0] = 22;
        tabop[1] = 1;
        tabop[2] = 66;
        tabop[3] = 11;
        *nbop = 4;
    }
    
    else if(faceR[2][1] == 14){
        tabop[0] = 66;
        tabop[1] = 55;
        tabop[2] = 6;
        *nbop = 3;
    }
    
    //cas de la piece sur la faceY *ok*
    else if (faceY[0][1] == 14){
        tabop[0] = 11;
        tabop[1] = 3;
        tabop[2] = 1;
        *nbop = 3;
    }
   
    else if(faceY[1][0] == 14){
        tabop[0] = 3;
        *nbop = 1;
    }
    
    else if(faceY[1][2] == 14){
        tabop[0] = 1;
        tabop[1] = 1;
        tabop[2] = 3;
        tabop[3] = 1;
        tabop[4] = 1;
        *nbop = 5;
    }
        
    //cas de la piece sur la faceW *ok*
     else if (faceW[0][1] == 14){
        tabop[0] = 44;
        tabop[1] = 33;
        *nbop = 2;
    }
   
    else if(faceW[1][0] == 14){
        tabop[0] = 33;
        *nbop = 1;
    }
    
    else if(faceW[1][2] == 14){
        tabop[0] = 4;
        tabop[1] = 4;
        tabop[2] = 33;
        *nbop = 3;
    }
    
    else if(faceW[2][1] == 14){
        tabop[0] = 4;
        tabop[1] = 33;
        *nbop = 2;
    }
    
    if (tabop[0] != 0)
        RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);
        
        
    /**************************************************************************
    *********************************milieu 16*********************************
    **************************************************************************/
    //cas de la piece sur la faceB *ok*
    if(faceB[1][2] == 16){
        tabop[0] = 0;
        *nbop = 1;
    }
    
    else if(faceB[2][1] == 16){
        tabop[0] = 44;
        tabop[1] = 6;
        tabop[2] = 4;
        tabop[3] = 66;
        *nbop = 4;
    }
    
    //cas de la piece sur la faceO *ok*
    else if (faceO[0][1] == 16){
        tabop[0] = 66;
        tabop[1] = 11;
        tabop[2] = 6;
        *nbop = 3;
    }
   
    else if(faceO[1][0] == 16){
        tabop[0] = 6;
        tabop[1] = 33;
        tabop[2] = 4;
        tabop[3] = 66;
         *nbop = 4;
    }
    //faceO[1][2] => impossible
    
    else if(faceO[2][1] == 16){
        tabop[0] = 6;
        tabop[1] = 4;
        tabop[2] = 66;
        *nbop = 3;
    }
    
     //cas de la piece sur la faceG *ok*
    else if (faceG[0][1] == 16){
        tabop[0] = 55;
        tabop[1] = 2;
        tabop[2] = 2;
        *nbop = 3;
    }
   
    else if(faceG[1][0] == 16){
        tabop[0] = 2;
        tabop[1] = 2;
        *nbop = 2;
    }
    
    else if(faceG[1][2] == 16){
        tabop[0] = 5;
        tabop[1] = 5;
        tabop[2] = 2;
        tabop[3] = 2;
        *nbop = 4;
    }
    
    else if(faceG[2][1] == 16){
        tabop[0] = 5;
        tabop[1] = 2;
        tabop[2] = 2;
        *nbop = 3;
    }
    
     //cas de la piece sur la faceR *ok*
    else if (faceR[0][1] == 16){
        tabop[0] = 66;
        tabop[1] = 1;
        tabop[2] = 6;
        *nbop = 3;
    }
   
    else if(faceR[1][0] == 16){
        tabop[0] = 2;
        tabop[1] = 66;
        tabop[2] = 1;
        tabop[3] = 6;
        *nbop = 4;
    }
    
    else if(faceR[1][2] == 16){
        tabop[0] = 22;
        tabop[1] = 66;
        tabop[2] = 1;
        tabop[3] = 6;
        *nbop = 4;
    }
    
    else if(faceR[2][1] == 16){
        tabop[0] = 2;
        tabop[1] = 55;
        tabop[2] = 66;
        *nbop = 3;
    }
    
    //cas de la piece sur la faceY *ok*
    else if (faceY[0][1] == 16){
        tabop[0] = 1;
        tabop[1] = 22;
        tabop[2] = 11;
        *nbop = 3;
    }
   
    else if(faceY[1][0] == 16){
        tabop[0] = 6;
        tabop[1] = 6;
        tabop[2] = 3;
        tabop[3] = 6;
        tabop[4] = 6;
        *nbop = 5;
    }
    
    else if(faceY[1][2] == 16){
        tabop[0] = 22;
        *nbop = 1;
    }
        
    //cas de la piece sur la faceW *ok*
     else if (faceW[0][1] == 16){
        tabop[0] = 4;
        tabop[1] = 2;
        *nbop = 2;
    }
   
    else if(faceW[1][0] == 16){
        tabop[0] = 4;
        tabop[1] = 4;
        tabop[2] = 2;
        *nbop = 3;
    }
    
    else if(faceW[1][2] == 16){
        tabop[0] = 2;
        *nbop = 1;
    }
    
    else if(faceW[2][1] == 16){
        tabop[0] = 44;
        tabop[1] = 2;
        *nbop = 2;
    }
    
    if (tabop[0] != 0)
        RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);
    
    /**************************************************************************
    *********************************milieu 18*********************************
    **************************************************************************/
    //cas de la piece sur la faceB *ok*
    
    //faceB[1][2] => impossible
    
    if(faceB[2][1] == 18){
        tabop[0] = 0;
        *nbop = 1;
    }
    
    //cas de la piece sur la faceO *ok*
    else if (faceO[0][1] == 18){
        tabop[0] = 6;
        tabop[1] = 6;
        tabop[2] = 11;
        tabop[3] = 6;
        tabop[4] = 6;
        *nbop = 5;
    }
   
    else if(faceO[1][0] == 18){
        tabop[0] = 33;
        tabop[1] = 4;
        tabop[2] = 3;
        *nbop = 3;
    }
    //faceO[1][2] => impossible
    
    else if(faceO[2][1] == 18){
        tabop[0] = 4;
        *nbop = 1;
    }
    
     //cas de la piece sur la faceG *ok*
    else if (faceG[0][1] == 18){
        tabop[0] = 5;
        tabop[1] = 5;
        tabop[2] = 4;
        tabop[3] = 4;
        *nbop = 4;
    }
   
    else if(faceG[1][0] == 18){
        tabop[0] = 55;
        tabop[1] = 4;
        tabop[2] = 4;
        *nbop = 3;
    }
    
    else if(faceG[1][2] == 18){
        tabop[0] = 5;
        tabop[1] = 4;
        tabop[2] = 4;
        *nbop = 3;
    }
    
    else if(faceG[2][1] == 18){
        tabop[0] = 4;
        tabop[1] = 4;
        *nbop = 2;
    }
    
     //cas de la piece sur la faceR *ok*
    else if (faceR[0][1] == 18){
        tabop[0] = 6;
        tabop[1] = 6;
        tabop[2] = 1;
        tabop[3] = 6;
        tabop[4] = 6;
        *nbop = 5;
    }
   
    //faceR[1][0] => impossible
    
    else if(faceR[1][2] == 18){
        tabop[0] = 66;
        tabop[1] = 2;
        tabop[2] = 6;
        tabop[3] = 44;
        *nbop = 4;
    }
    
    else if(faceR[2][1] == 18){
        tabop[0] = 44;
        *nbop = 1;
    }
    
    //cas de la piece sur la faceY *ok*
    else if (faceY[0][1] == 18){
        tabop[0] = 66;
        tabop[1] = 55;
        tabop[2] = 2;
        tabop[3] = 6;
        tabop[4] = 44;
        *nbop = 5;
    }
   
    else if(faceY[1][0] == 18){
        tabop[0] = 6;
        tabop[1] = 3;
        tabop[2] = 66;
        *nbop = 3;
    }
    
    else if(faceY[1][2] == 18){
        tabop[0] = 66;
        tabop[1] = 22;
        tabop[2] = 6;
        *nbop = 3;
    }
    
    //faceY[2][1] => impossible    
        
    //cas de la piece sur la faceW *ok*
     else if (faceW[0][1] == 18){
        tabop[0] = 44;
        tabop[1] = 6;
        tabop[2] = 33;
        tabop[3] = 66;
        *nbop = 4;
    }
   
    else if(faceW[1][0] == 18){
        tabop[0] = 6;
        tabop[1] = 33;
        tabop[2] = 66;
        *nbop = 3;
    }
    
    else if(faceW[1][2] == 18){
        tabop[0] = 66;
        tabop[1] = 2;
        tabop[2] = 6;
        *nbop = 3;
    }
    
    else if(faceW[2][1] == 18){
        tabop[0] = 4;
        tabop[1] = 6;
        tabop[2] = 33;
        tabop[3] = 66;
        *nbop = 4;
    }
    
    if (tabop[0] != 0)
        RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);

}



void CoinsBleus (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], int nbEtapes, int *choixOperation, int tabop[15], int  *nbop, SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle, int *etat){
    
    /**************************************************************************
    **********************************coins 11*********************************
    **************************************************************************/
    //cas de la faceB    
    if(faceB[0][0] == 11){
        tabop[0] = 0;
        *nbop = 1;
    }        
    
    else if(faceB[0][2] == 11){
        tabop[0] = 2;
        tabop[1] = 5;
        tabop[2] = 22;
        tabop[3] = 11;
        tabop[4] = 3;
        tabop[15] = 1;
        tabop[6] = 33;
        *nbop = 7;
    }
    
    else if(faceB[2][0] == 11){
        tabop[0] = 44;
        tabop[1] = 55;
        tabop[2] = 4;
        tabop[3] = 3;
        tabop[4] = 11;
        tabop[15] = 33;
        tabop[6] = 1;
        *nbop = 7;
    }
    
    else if(faceB[2][2] == 11){
        tabop[0] = 4;
        tabop[1] = 2;
        tabop[2] = 2;
        tabop[3] = 44;
        tabop[4] = 11;
        tabop[15] = 3;
        tabop[6] = 1;
        tabop[7] = 33;
        *nbop = 8;
    }
    
    //cas de la faceO
    else if(faceO[0][0] == 11){
        tabop[0] = 11;
        tabop[1] = 3;
        tabop[2] = 1;
        tabop[3] = 33;
        *nbop = 4;        
    }
    
    else if(faceO[0][2] == 11){
        tabop[0] = 33;
        tabop[1] = 55;
        tabop[2] = 3;
        tabop[3] = 5;
        tabop[4] = 11;
        tabop[15] = 3;
        tabop[6] = 1;
        tabop[7] = 33;
        *nbop = 8;
    }
    
    else if(faceO[2][0] == 11){
        tabop[0] = 55;
        tabop[1] = 3;
        tabop[2] = 11;
        tabop[3] = 33;
        tabop[4] = 1;
        *nbop = 5;
    }
    
    else if(faceO[2][2] == 11){
        tabop[0] = 3;
        tabop[1] = 5;
        tabop[2] = 33;
        tabop[3] = 5;
        tabop[4] = 5;
        tabop[15] = 3;
        tabop[6] = 11;
        tabop[7] = 33;
        tabop[8] = 1;
        *nbop = 9;
    }     
    else
        return;
    
    if (tabop[0] != 0)
        RealisationOperation(faceB, faceO, faceG, faceR, faceY, faceW, nbEtapes, choixOperation, tabop, nbop, fenetre, interp, rectangle, etat);
    
    
}
