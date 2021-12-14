CC=gcc
CFLAGS=-I. -g
DEPS =
OBJ = nice_regular_box.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

default: $(OBJ)
	$(CC) -o nrb.out $^ $(CFLAGS)

clean:
	rm -f *.o *.out

run: default
	./nrb.out
	
