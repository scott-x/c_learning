/*
* @Author: scottxiong
* @Date:   2019-10-07 16:25:04
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 16:33:05
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	//建议使用typedef定义结构体
	typedef struct
	{
		int x;
		int y;
	}point;

	point p = {1,2};
	printf("(%d,%d)\n",p.x,p.y); //(1,2)
	return 0;
}