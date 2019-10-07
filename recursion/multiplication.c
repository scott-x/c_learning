/*
* @Author: scottxiong
* @Date:   2019-10-07 20:49:06
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 20:51:34
*/
#include <stdio.h>

unsigned int multiplication(int x){
	if (x==1) {
		return x;
	}else if (x>1) {
		return x*multiplication(x-1);
	}
	return 0;
}

int main(int argc, char const *argv[])
{
    printf("5的阶乘为:%d\n",multiplication(5)); //5的阶乘为:120
	return 0;
}