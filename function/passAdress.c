/*
* @Author: scottxiong
* @Date:   2019-10-07 16:38:17
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 16:40:28
*/
#include <stdio.h>

void addOne(int n) {
	n++;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Before:%d\n",n ); 
	addOne(n);
	printf("After:%d\n",n );
	return 0;
}

/*
Before:0
After:0
*/