CC=clang
CFLAGS=-O2 -g
LDFLAGS=-O2 -g
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
