/*
* @Author: scottxiong
* @Date:   2019-10-26 16:33:39
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 16:35:49
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char sentences[100];
	strcpy(sentences,"hello");
	strcpy(sentences,"world");
	puts(sentences);//world
	strcat(sentences," is ");
	strcat(sentences,"very large");
	puts(sentences);//world is very large
	return 0;
}