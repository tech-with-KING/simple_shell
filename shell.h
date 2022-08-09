#ifndef SHELL_H
#define SHELL_H
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
char *shell_readline(void);
char **shell_split_line(char *line);
int  shell_exec(char* args,char **argv);
#endif 
       
