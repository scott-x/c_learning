/*
* @Author: scottxiong
* @Date:   2019-10-07 16:15:10
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 16:24:24
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct point
	{
		int x;
		int y;
	};

	struct point p;
	p.x=1;
	p.y=2;
	printf("%d,%d\n", p.x,p.y); //1,2
	return 0;
}