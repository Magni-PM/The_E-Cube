#include <SDL2/SDL.h>
#define LARGEUR 500
#define HAUTEUR 400
#define DELAY 5000

extern void affichageSDL(int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3], SDL_Window *fenetre, SDL_Renderer *interp,SDL_Rect rectangle);

extern void affichageFaceB (int faceB[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
extern void affichageFaceG (int faceG[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
extern void affichageFaceO (int faceO[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
extern void affichageFaceR (int faceR[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
extern void affichageFaceY (int faceY[3][3],SDL_Renderer *interp,SDL_Rect rectangle);
extern void affichageFaceW (int faceW[3][3],SDL_Renderer *interp,SDL_Rect rectangle);

extern void Affichage (int faceB[3][3], int faceO[3][3], int faceG[3][3], int faceR[3][3], int faceY[3][3], int faceW[3][3]);
