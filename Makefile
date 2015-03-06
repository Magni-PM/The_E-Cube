CC=clang
CFLAGS=-O2 -g
LDFLAGS=-O2 -g
EXEC=The_E-Cube
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

The_E-Cube: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS) 

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS) 
	
clean:
	@rm -rf *.o etapes.txt
	
mproper: clean
	@rm -rf $(EXEC) 
