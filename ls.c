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
#include <sys/wait.h>
#include <unistd.h>
#include <dirent.h>
int main(int argc, char *argv[])
{



	printf("child");

	char *wd = getcwd(NULL,0);
	DIR *d;
	struct dirent *dir;
	d = opendir(".");
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			printf("%s  ", dir->d_name);

		}
		printf("\n");
		closedir(d);
	}
	return (0);
}
