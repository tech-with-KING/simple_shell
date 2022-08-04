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


int main(int arg, char* argv[])
{
	char command[99] ;
	
	printf("<--------BIN/LS----------->\n");
	do {
		printf("(~$)");
		scanf("%s", command);
		printf("(~s)%s\n",command);
		if (strcmp(command, "PWD")==0) {
			printf("pwd");
		}
		else if (strcmp(command, "cd")==0) {
			printf("cd");
		}
		
	}while (strcmp(command, "exit")!=0);
	return (0);
}
