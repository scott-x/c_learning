/*
* @Author: scottxiong
* @Date:   2019-10-07 16:47:55
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 16:52:11
*/
#include <stdio.h>

typedef struct 
{
	int x;
	int y;
}point;

void moveForward(point *p) {
		++(*p).x;
		++(*p).y;
}

int main(int argc, char const *argv[])
{
	
    point p = {2,3};
    printf("Before(%d,%d)\n",p.x,p.y );
    moveForward(&p);
    printf("After(%d,%d)\n",p.x,p.y );
	return 0;
}


/*
Before(2,3)
After(3,4)
*/