/*
* @Author: scottxiong
* @Date:   2019-09-20 14:47:34
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:50:00
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[100];
	for (int i=0;i<100;i++){
       arr[i]=2*i+1;
	}
	printf("arr[99]:%d\n",arr[99] ); //arr[99]:199
	return 0;
}