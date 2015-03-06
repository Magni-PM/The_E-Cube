#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


extern void U(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3]){
	int j; //iterateur boucle
	float tp[3][3]; //tableau tampon
	
	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[0][j] = faceB[0][j];
		faceB[0][j] = faceR[0][j];
		faceR[0][j] = faceG[0][j];
		faceG[0][j] = faceO[0][j];
		faceO[0][j] = tp[0][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceY[2][1];
	float tpupc = faceY[2][0];
	//aretes
	faceY[2][1] = faceY[1][2];
	faceY[1][2] = faceY[0][1];
	faceY[0][1] = faceY[1][0];
	faceY[1][0] = tpupa;
	//coins
	faceY[2][0] = faceY[2][2];
	faceY[2][2] = faceY[0][2];
	faceY[0][2] = faceY[0][0];
	faceY[0][0] = tpupc;
}

extern void Ui(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	
        
	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[0][j] = faceB[0][j];
		faceB[0][j] = faceO[0][j];
		faceO[0][j] = faceG[0][j];
		faceG[0][j] = faceR[0][j];
		faceR[0][j] = tp[0][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceY[2][1];
	float tpupc = faceY[2][0];
	//aretes
	faceY[2][1] = faceY[1][0];
	faceY[1][0] = faceY[0][1];
	faceY[0][1] = faceY[1][2];
	faceY[1][2] = tpupa;
	//coins
	faceY[2][0] = faceY[0][0];
	faceY[0][0] = faceY[0][2];
	faceY[0][2] = faceY[2][2];
	faceY[2][2] = tpupc;
    }

 extern void R(float faceB[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

        //on permute les cotes
	for (j=0; j<3 ; j++){
		tp[j][2] = faceB[j][2];
		faceB[j][2] = faceW[j][2];
		faceW[j][2] = faceG[2-j][0]; //car on nverse le elements de la colonne
		faceG[2-j][0] = faceY[j][2];
		faceY[j][2] = tp[j][2];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceR[2][1];
	float tpupc = faceR[2][0];
	//aretes
	faceR[2][1] = faceR[1][2];
	faceR[1][2] = faceR[0][1];
	faceR[0][1] = faceR[1][0];
	faceR[1][0] = tpupa;
	//coins
	faceR[2][0] = faceR[2][2];
	faceR[2][2] = faceR[0][2];
	faceR[0][2] = faceR[0][0];
	faceR[0][0] = tpupc;
}

 extern void Ri(float faceB[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon		

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[j][2] = faceB[j][2];
		faceB[j][2] = faceY[j][2];
		faceY[j][2] = faceG[2-j][0];
		faceG[2-j][0] = faceW[j][2];
		faceW[j][2] = tp[j][2];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceR[2][1];
	float tpupc = faceR[2][0];
	//aretes
	faceR[2][1] = faceR[1][0];
	faceR[1][0] = faceR[0][1];
	faceR[0][1] = faceR[1][2];
	faceR[1][2] = tpupa;
	//coins
	faceR[2][0] = faceR[0][0];
	faceR[0][0] = faceR[0][2];
	faceR[0][2] = faceR[2][2];
	faceR[2][2] = tpupc;
}

extern void L(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceY[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon		
	
	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[j][0] = faceB[j][0];
		faceB[j][0] = faceY[j][0];
		faceY[j][0] = faceG[2-j][2];
		faceG[2-j][2] = faceW[j][0];
		faceW[j][0] = tp[j][0];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceO[2][1];
	float tpupc = faceO[2][0];
	//aretes
	faceO[2][1] = faceO[1][2];
	faceO[1][2] = faceO[0][1];
	faceO[0][1] = faceO[1][0];
	faceO[1][0] = tpupa;
	//coins
	faceO[2][0] = faceO[2][2];
	faceO[2][2] = faceO[0][2];
	faceO[0][2] = faceO[0][0];
   	faceO[0][0] = tpupc;
}

extern void Li(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceY[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[j][0] = faceB[j][0];
		faceB[j][0] = faceW[j][0];
		faceW[j][0] = faceG[2-j][2];
		faceG[2-j][2] = faceY[j][0];
		faceY[j][0] = tp[j][0];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceO[2][1];
	float tpupc = faceO[2][0];
	//aretes
	faceO[2][1] = faceO[1][0];
	faceO[1][0] = faceO[0][1];
	faceO[0][1] = faceO[1][2];
	faceO[1][2] = tpupa;
	//coins
	faceO[2][0] = faceO[0][0];
	faceO[0][0] = faceO[0][2];
	faceO[0][2] = faceO[2][2];
	faceO[2][2] = tpupc;
}

extern void D(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[2][j] = faceB[2][j];
		faceB[2][j] = faceR[2][j];
		faceR[2][j] = faceG[2][j];
		faceG[2][j] = faceO[2][j];
		faceO[2][j] = tp[2][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceW[2][1];
	float tpupc = faceW[2][0];
	//aretes
	faceW[2][1] = faceW[1][0];
	faceW[1][0] = faceW[0][1];
	faceW[0][1] = faceW[1][2];
	faceW[1][2] = tpupa;
	//coins
	faceW[2][0] = faceW[0][0];
	faceW[0][0] = faceW[0][2];
	faceW[0][2] = faceW[2][2];
	faceW[2][2] = tpupc;
}

extern void Di(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[2][j] = faceB[2][j];
		faceB[2][j] = faceO[2][j];
		faceO[2][j] = faceG[2][j];
		faceG[2][j] = faceR[2][j];
		faceR[2][j] = tp[2][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceW[2][1];
	float tpupc = faceW[2][0];
	//aretes
	faceW[2][1] = faceW[1][2];
	faceW[1][2] = faceW[0][1];
	faceW[0][1] = faceW[1][0];
	faceW[1][0] = tpupa;
	//coins
	faceW[2][0] = faceW[2][2];
	faceW[2][2] = faceW[0][2];
	faceW[0][2] = faceW[0][0];
	faceW[0][0] = tpupc;

}

extern void B(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3], float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[0][j] = faceY[0][j];
		faceY[0][j] = faceR[j][2];
		faceR[j][2] = faceW[2][2-j];
		faceW[2][2-j] = faceO[2-j][0];
		faceO[2-j][0] = tp[0][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceG[2][1];
	float tpupc = faceG[2][0];
	//aretes
	faceG[2][1] = faceG[1][2];
	faceG[1][2] = faceG[0][1];
	faceG[0][1] = faceG[1][0];
	faceG[1][0] = tpupa;
	//coins
	faceG[2][0] = faceG[2][2];
	faceG[2][2] = faceG[0][2];
	faceG[0][2] = faceG[0][0];
	faceG[0][0] = tpupc;

}

extern void Bi(float faceB[3][3],float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3], float faceW[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[0][j] = faceY[0][j];
		faceY[0][j] = faceO[2-j][0];
		faceO[2-j][0] = faceW[2][2-j];
		faceW[2][2-j] = faceR[j][2];
		faceR[j][2] = tp[0][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceG[2][1];
	float tpupc = faceG[2][0];
	//aretes
	faceG[2][1] = faceG[1][0];
	faceG[1][0] = faceG[0][1];
	faceG[0][1] = faceG[1][2];
	faceG[1][2] = tpupa;
	//coins
	faceG[2][0] = faceG[0][0];
	faceG[0][0] = faceG[0][2];
	faceG[0][2] = faceG[2][2];
	faceG[2][2] = tpupc;
}

extern void F(float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3],float faceW[3][3], float faceB[3][3]){
	int j; //iterateur boucle
	float tp[3][3]; //tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[2][j] = faceY[2][j];
		faceY[2][j] = faceO[2-j][2];
		faceO[2-j][2] = faceW[0][2-j];
		faceW[0][2-j] = faceR[j][0];
		faceR[j][0] = tp[2][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceB[2][1];
	float tpupc = faceB[2][0];
	//aretes
	faceB[2][1] = faceB[1][2];
	faceB[1][2] = faceB[0][1];
	faceB[0][1] = faceB[1][0];
	faceB[1][0] = tpupa;
	//coins
	faceB[2][0] = faceB[2][2];
	faceB[2][2] = faceB[0][2];
	faceB[0][2] = faceB[0][0];
	faceB[0][0] = tpupc;

}

extern void Fi(float faceO[3][3],float faceG[3][3],float faceR[3][3],float faceY[3][3],float faceW[3][3], float faceB[3][3]){
	int j;//iterateur boucle
	float tp[3][3];//tableau tampon	

	//on permute les cotes
	for (j=0; j<3 ; j++){
		tp[2][j] = faceY[2][j];
		faceY[2][j] = faceR[j][0];
		faceR[j][0] = faceW[0][2-j];
		faceW[0][2-j] = faceO[2-j][2];
		faceO[2-j][2] = tp[2][j];
	}
	//on fait la permutation circulaire de la matrice superieur
	float tpupa = faceB[2][1];
	float tpupc = faceB[2][0];
	//aretes
	faceB[2][1] = faceB[1][0];
	faceB[1][0] = faceB[0][1];
	faceB[0][1] = faceB[1][2];
	faceB[1][2] = tpupa;
	//coins
	faceB[2][0] = faceB[0][0];
	faceB[0][0] = faceB[0][2];
	faceB[0][2] = faceB[2][2];
	faceB[2][2] = tpupc;

}
