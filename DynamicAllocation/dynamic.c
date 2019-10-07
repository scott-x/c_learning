/*
* @Author: scottxiong
* @Date:   2019-10-07 17:01:07
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 17:13:44
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	typedef struct
	{
		char * name;
		int age;

	}person;
	
    person * scott = malloc(sizeof(person));;
	scott->name = "Scott Xiong";
	scott->age = 18;

	printf("%s\n", scott->name); //Scott Xiong
	printf("%d\n", scott->age);  //18
	free(scott);
	return 0;
}