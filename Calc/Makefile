CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g
SRC = src/code.c
OUT = calc

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT) *.o
