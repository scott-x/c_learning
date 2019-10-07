/*
* @Author: scottxiong
* @Date:   2019-10-07 17:01:07
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 19:16:12
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// Allocate memory to store five characters
	int n = 5;
	char *pvowels = (char *) malloc(n * sizeof(char));
	int i;

	pvowels[0] = 'A';
	pvowels[1] = 'E';
	*(pvowels + 2) = 'I';
	pvowels[3] = 'O';
	*(pvowels + 4) = 'U';

	for (i = 0; i < n; i++) {
	    printf("%c ", pvowels[i]);
	}

	printf("\n");

	free(pvowels);
	return 0;
}

//A E I O U 