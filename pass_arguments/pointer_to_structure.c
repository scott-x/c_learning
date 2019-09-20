/*
* @Author: scottxiong
* @Date:   2019-09-20 16:50:08
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 16:57:10
*/
#include <stdio.h>

typedef struct{
	int x;
	int y;
}point;

void move(point * p) {
    (*p).x++;
    (*p).y++;
}

int main(int argc, char const *argv[])
{
    point p;
    // point p={1,2}; struct的初始化
    printf("move before:p(%d,%d)\n", p.x,p.y);
    move(&p);
    printf("move after:p(%d,%d)\n", p.x,p.y);
	return 0;
}

/*
move before:p(0,0)
move after:p(1,1)
*/