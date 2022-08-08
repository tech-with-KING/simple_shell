#include "shell.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "syscall.h"
#include "dirent.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <unistd.h>
int main(int argc , char *argv[]){
	char *wd = getcwd(NULL,0);
	printf("%s\n",wd);
	free(wd);
	return (0);
}
