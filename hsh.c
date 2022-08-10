#include <stdio.h>
#include <sys/unistd.h>
#include <sys/user.h>
#include "shell.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <ctype.h>
#include <unistd.h>
/**
 *main - main function calls the shell loop
 *
 *Return - 0 always success
 */
int main(int arg, char* argv[])
{
	
	char *command ;
	char com[] = "heoolo boy 'hi there to my lovely friend'>>a.ou";
	char ch;
	/* main function loop checks for EOF command else continues execution */
	
	do {
		printf("($)");
		scanf("%s", command);
		if (strcmp(command, "pwd")==0) {
			shell_exec(command, argv);

		}
		else if (strcmp(command, "cd")==0) {
			shell_exec(command, argv);
					}
		else if (strcmp(command, "ls")==0) {
			shell_exec(command, argv);
		}
		else if (strcmp(command, "echo")==0) {
			shell_exec(command, argv);
		}
		else if (strcmp(command, "env")==0) {
			shell_exec(command, argv);
		}
	}while (strcmp(command, "exit")!=0 && (ch = getchar() != EOF));
        /* later we are going to have a fuction that tokenizes our string but
         *for the shell will not be taking in any extra argument it will take just the first command passed
	 */

	return (0);
}


/* the shell exec function h */
/*this cannot be in the main fuction because the fork command will cause other processes*/

int shell_exec(char* args, char **argv){
	int id = fork();
	if(id == 0)
	{
		execv(args,argv);
	}
	wait(NULL);
	return 0;
}
