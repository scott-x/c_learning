/*
* @Author: scottxiong
* @Date:   2019-09-24 03:17:44
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-24 03:34:29
枚举==>寻找水仙花的数量：他是一个三位数，各个位数的立方和加起来等于它本身 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m; //m是个三位数：大于100，小于1000
	for (m = 100; m<1000; m++){
		int g = m%10;
		int s = m/10%10;
		int b = m/100%10;
		if (g*g*g+s*s*s+b*b*b==m){
			printf("%4d",m );
		}
	}
	return 0;
}


/*
153 370 371 407
*
/