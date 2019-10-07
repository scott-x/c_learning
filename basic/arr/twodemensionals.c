/*
* @Author: scottxiong
* @Date:   2019-09-20 14:06:50
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:08:46
* 二维数组就是一个table，由row column组成
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[3][4] = {  
     {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
     {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
     {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };

    printf("%d\n",a[1][1]); //5
	return 0;
}