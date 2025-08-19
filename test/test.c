#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main()
{
        unsigned int i = 0;
        char *word;
	char line[] = " /bin/ls  ";
        /* use strtok to split full path into individual path */
        word = strtok(line, " ");
	if (word == NULL)
		printf("null\n");
        /* loop through the path tokens */
        while (word != NULL)
        {
               printf("i is %d, and word is %s\n", i, word);
               i++;
               word = strtok(NULL, " "); /* get the next path */
        }
        return (0);
}
