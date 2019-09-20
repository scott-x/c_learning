/*
* @Author: scottxiong
* @Date:   2019-09-20 16:45:43
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 16:49:21
*/
#include <stdio.h>

void addone(int * n) {
    (*n)++;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Before: %d\n", n);
	addone(&n);
	printf("After: %d\n", n);
	return 0;
}

/*
Before: 0
After: 1
*/