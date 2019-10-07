/*
* @Author: scottxiong
* @Date:   2019-09-20 14:17:55
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:34:58
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	char name[] = "John Smith"; //编译器会自动帮我们算11
    //等价于char name[11] = "John Smith"; 
    int age = 12;
    printf("%s is %d years old\n", name, age ); //John Smith is 12 years old
	return 0;
}