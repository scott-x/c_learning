/*
* @Author: scottxiong
* @Date:   2019-10-26 15:29:30
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 15:32:12
c语言另一个打印字符串的方法 puts(char *str),需引入stdio.h
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *name = "Scott Xiong";
	char another[] ="Timmy He";
	puts(name); //Scott Xiong
	puts(another); //Timmy He
	return 0;
}