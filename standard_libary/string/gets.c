/*
* @Author: scottxiong
* @Date:   2019-10-26 16:29:39
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 16:32:05
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	char name[100];
	gets(name);
	printf("The name is %s\n",name );
	return 0;
}

/*
warning: this program uses gets(), which is unsafe.
lasdldas
The name is lasdldas
*/