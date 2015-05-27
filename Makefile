CC=clang
CFLAGS=-O0 -g -Wall
LDFLAGS=-O0 -g -Wall
EXEC=The_E-Cube
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) -lSDL2 -o $@ $^ $(LDFLAGS) 

%.o: %.c
	@$(CC) -I/usr/include/SDL2 -o $@ -c $< $(CFLAGS) 
	
clean:
	@rm -rf *.o etapes.txt
	
mproper: clean
	@rm -rf $(EXEC) 
