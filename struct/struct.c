/*
* @Author: scottxiong
* @Date:   2019-09-20 17:41:04
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 17:44:35
*/
#include <stdio.h>

typedef struct{
	char * name;
	int age;
}person;

int main(int argc, char const *argv[])
{
	person p = {"Judy",18};
	printf("name=>%s age=>%d\n", p.name, p.age);
	return 0;
}

/*
name=>Judy age=>18
*/