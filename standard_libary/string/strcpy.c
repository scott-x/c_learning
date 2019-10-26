/*
* @Author: scottxiong
* @Date:   2019-10-26 14:18:11
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 14:36:52
char * strcpy ( char * destination, const char * source );
strcpy的用法：
1，  需引入头文件 string.h
2,   要保证destination有足够的空间：你可以用malloc或者给个大点的数组空间eg: char name[100];
3,   Parameters
		destination
		Pointer to the destination array where the content is to be copied.
		source
		C string to be copied.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char * str1 = "hello world";
	char * str2 = (char *) malloc(sizeof(char) * strlen(str1));
	strcpy(str2,str1);
	printf("str2:%s\n",str2); //str2:hello world
    char str3[100] = "I am str3";
    strcpy(str3,str1);
    printf("str3:%s\n",str3); //str3:hello world
	free(str2);
	return 0;
}

