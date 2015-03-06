#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



void Affichage(float faceB[3][3], float faceO[3][3], float faceG[3][3], float faceR[3][3], float faceY[3][3], float faceW[3][3], int nbEtapes, int nbModAlea){
	//declaration variable
	int i;
	
	
	printf("Les faces sont :\n                  |-----------------|\n                  |------Jaune------|\n");
	printf("|-----------------|-----------------|-----------------||-----------------|\n|------Orange-----|------Bleue------|------Rouge------||------Verte------|\n|-----------------|-----------------|-----------------||-----------------|\n");
	printf("                  |-----Blanche-----|\n                  |-----------------|\n");
	printf("***************************************************************************\n***************************************************************************\n");
	
	printf("Etat actuel du cube :\n  \n  \n");
	printf("\nNombre de modification aleatoire du cube : %d\n", nbModAlea);
	printf("\nNombre de modification du cube : %d\n \n", nbEtapes);

	//face du dessus : yellow
	for(i=0; i<3; i++)
	{
            printf("                  |-----|-----|-----|\n");
            printf("                  | %.1f | %.1f | %.1f |\n", faceY[i][0], faceY[i][1], faceY[i][2]);
    	}
    	//faces du milieu : orange / bleue / rouge / verte
    	for(i=0; i<3; i++)
    	{
            printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----||-----|-----|-----|\n");
            printf("| %.1f | %.1f | %.1f | %.1f | %.1f | %.1f | %.1f | %.1f | %.1f || %.1f | %.1f | %.1f |\n",faceO[i][0], faceO[i][1], faceO[i][2], faceB[i][0], faceB[i][1], faceB[i][2], faceR[i][0], faceR[i][1], faceR[i][2], faceG[i][0], faceG[i][1], faceG[i][2]);
   	}
   	printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----||-----|-----|-----|\n");
	//face du dessous : blanche
	for(i=0; i<3; i++)
	{
		printf("                  | %.1f | %.1f | %.1f |\n",faceW[i][0], faceW[i][1], faceW[i][2]);
		printf("                  |-----|-----|-----|\n");
    	}
 }
