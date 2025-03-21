#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>


int main(int argc, char** argv){
    puts("Dric's Lispy Version 0.0.0.0,1");
    puts("Press Ctrl+c to Exit\n");

    /*Never ending loop for IO*/
    while(1){
    	char* input = readline("driclispy> ");
	
	//for handling newline traversing for linux and mac
	add_history(input);

	//testing if input works
	printf("No you're a %s\n", input);

	//stopping memory leaks by freeing input
	free(input);
    }

    return 0;
} 
