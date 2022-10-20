#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[] = "meticulously done to enhance the process of making this fun ";
	char *first_word = strtok(string, " ");
	printf("%s\n",string);
 	/* first_word = strtok(NULL, " "); */
	/* printf("%s\n",first_word); */
	/* first_word = strtok(NULL, " "); */
	/* printf("%s\n",first_word); */
	return (0);
}
