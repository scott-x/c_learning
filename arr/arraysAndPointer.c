/*
* @Author: scottxiong
* @Date:   2019-10-07 17:20:20
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 17:29:51
https://www.learn-c.org/en/Arrays_and_Pointers
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char vowels[] = {'A', 'E', 'I', 'O', 'U'};
	char *pvowels = vowels;
	int i;

	// Print the addresses
	for (i = 0; i < 5; i++) {
	    printf("&vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
	}

	// Print the values
	for (i = 0; i < 5; i++) {
	    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
	}
	return 0;
}

/*
&vowels[0]: 1562487179, pvowels + 0: 1562487179, vowels + 0: 1562487179
&vowels[1]: 1562487180, pvowels + 1: 1562487180, vowels + 1: 1562487180
&vowels[2]: 1562487181, pvowels + 2: 1562487181, vowels + 2: 1562487181
&vowels[3]: 1562487182, pvowels + 3: 1562487182, vowels + 3: 1562487182
&vowels[4]: 1562487183, pvowels + 4: 1562487183, vowels + 4: 1562487183
vowels[0]: A, *(pvowels + 0): A, *(vowels + 0): A
vowels[1]: E, *(pvowels + 1): E, *(vowels + 1): E
vowels[2]: I, *(pvowels + 2): I, *(vowels + 2): I
vowels[3]: O, *(pvowels + 3): O, *(vowels + 3): O
vowels[4]: U, *(pvowels + 4): U, *(vowels + 4): U
*/