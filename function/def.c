/*
* @Author: scottxiong
* @Date:   2019-09-20 14:55:38
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:59:42
*/
#include <stdio.h>

void add(int a,int b){
	printf("%d+%d=%d\n",a,b,a+b);
}

int main(int argc, char const *argv[])
{
	add(1,3); //1+3=4
	return 0;
}