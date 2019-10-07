/*
* @Author: scottxiong
* @Date:   2019-10-07 20:44:03
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 20:47:26
*/
#include <stdio.h>

unsigned int multiply(int x, int y){
	if (x==1) {
		return y;
	}else if (x >1) {
		return y+multiply(x-1,y);
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	printf("3 times 5:%d\n",multiply(3,5)); //3 times 5:15
	return 0;
}