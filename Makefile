# Makefile to compile the project

CC = cc
CFlags = -std=c99 -Wall -lm
Target = prompt
SRC = prompt.c

$(Target): $(SRC)
	$(CC) $(CFlags) -o $(Target) $(SRC) -lreadline

clean:
	rm -f $(Target)
