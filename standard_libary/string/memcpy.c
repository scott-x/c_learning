/*
* @Author: scottxiong
* @Date:   2019-10-26 14:55:44
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 15:12:15
memcpy
void * memcpy ( void * destination, const void * source, size_t num );
注意 destination,source的size至少是mum个字节
destination
Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
source
Pointer to the source of data to be copied, type-casted to a pointer of type const void*.
num
Number of bytes to copy.
size_t is an unsigned integral type.
*/
#include <stdio.h>
#include <string.h>

struct
{
	char name[40];
	int age;
}person, person_copy;

int main(int argc, char const *argv[])
{
	char myname[] = "scott xiong";
	/* using memcpy to copy string: */
	memcpy(person.name,myname,strlen(myname)+1);
	person.age = 18;
	/* using memcpy to copy structure: */
	memcpy(&person_copy,&person,sizeof(person));
	printf("person_copy: name is %s, age is %d\n",person_copy.name,person_copy.age );
	return 0;
}
/*
person_copy: name is scott xiong, age is 18
*/