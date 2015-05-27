#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "rotation.h"

void operation(int *choixOperation, int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3]){
	switch (*choixOperation)
	{
	case 0 :
		return;
		break;
	case 1 :
		U(faceB, faceO, faceG, faceR, faceY);
		break;
	case 11 :
		Ui(faceB, faceO, faceG, faceR, faceY);
		break;
	case 2 :
		R(faceB ,faceG ,faceR ,faceY ,faceW );
		break;
        case 22 :
		Ri(faceB ,faceG ,faceR ,faceY ,faceW );
		break;
        case 3 :
		L(faceB ,faceO ,faceG ,faceY ,faceW );
		break;
        case 33 :
		Li(faceB ,faceO ,faceG ,faceY ,faceW );
		break;
        case 4 :
		D(faceB ,faceO ,faceG ,faceR ,faceW );
		break;
        case 44 :
		Di(faceB ,faceO ,faceG ,faceR ,faceW );
		break;
        case 5 :
		B(faceB ,faceO ,faceG ,faceR ,faceY, faceW);
		break;
        case 55 :
		Bi(faceB ,faceO ,faceG ,faceR ,faceY, faceW);
		break;
        case 6 :
		F(faceO ,faceG ,faceR ,faceY ,faceW, faceB);
		break;
        case 66 :
		Fi(faceO ,faceG ,faceR ,faceY ,faceW, faceB);
		break;
	default :
		printf("Vous avez entré une commande non autorisee\n Veuillez en choisir une correcte\n");
		getchar();
		break;
	}
}
