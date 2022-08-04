#include <stdio.h>
#include <sys/unistd.h>
#include <sys/user.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "syscall.h"
#include "dirent.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <unistd.h>
int main(int arg, char* argv[])
{
	char command[99] ;
	char ch;
	
	do {
		printf("($)");
		scanf("%s", command);
		if (strcmp(command, "pwd")==0) {
			execv("./pwd",argv);
		}
		else if (strcmp(command, "cd")==0) {
			execv("./cd", argv);
		}
		else if (strcmp(command, "ls")==0) {
			execv("./ls", argv);
		}
		else if (strcmp(command, "echo")==0) {
			execv("./echo", argv);
		}
		else if (strcmp(command, "env")==0) {
			execv("./env", argv);
		}
	}while (strcmp(command, "exit")!=0 && (ch = getchar() != EOF));
	return (0);
}
