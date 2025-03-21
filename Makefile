# Makefile to compile the project

CC = cc
CFlags = -std=c99 -Wall -ledit -lm
Target = prompt
SRC = prompt.c

$(Target): $(SRC)
	$(CC) $(CFlags) -o $(Target) $(SRC)

clean:
	rm -f $(Target)
