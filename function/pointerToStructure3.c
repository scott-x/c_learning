/*
* @Author: scottxiong
* @Date:   2019-10-07 16:47:55
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 16:54:44
However, if we wish to dereference a structure and access one of it's internal members, 
we have a shorthand syntax for that,because this operation is widely used in data structures. 
We can rewrite this function using the following syntax:
*/
#include <stdio.h>

typedef struct 
{
	int x;
	int y;
}point;

void moveForward(point *p) {
		p->x++;
		p->y++;
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