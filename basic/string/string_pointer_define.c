/*
* @Author: scottxiong
* @Date:   2019-09-20 14:14:35
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:35:47
Strings in C are actually arrays of characters. Although using pointers in C 
is an advanced subject, fully explained later on, we will use pointers to a 
character array to define simple strings, in the following manner:
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char * name = "John Smith"; //Can read only, can't be revised
	printf("%s\n",name ); //John Smith
	return 0;
}

/*
This method creates a string which we can only use for reading. 
If we wish to define a string which can be manipulated, we will 
need to define it as a local character array:
char name[] = "John Smith";
*/