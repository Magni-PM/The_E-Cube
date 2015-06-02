#define ETAT_MENU 0
#define ETAT_MODALEA 1
#define ETAT_MODMANU 2
#define ETAT_RESOLUTION 3

extern void GestionEvents (SDL_Event events, SDL_Window *fenetre, int *etat, int *choixOperation);
extern void EventsCommuns (SDL_Event events, SDL_Window *fenetre, int *etat);
extern void GestionEvents_Menu(SDL_Event events, int *etat);
extern void GestionEvents_ModAlea(SDL_Event events, int *etat);
extern void GestionEvents_ModManu(SDL_Event events, int *etat, int *choixOperation);
