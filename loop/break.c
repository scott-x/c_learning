/*
* @Author: sottxiong
* @Date:   2019-09-20 19:57:46
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-09-20 20:03:19
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		printf("开始游泳第%d圈\n",i+1 );
		if (i+1==5){
			printf("肚子疼\n");
			break;
		}
	}
	printf("今天到此为止，结束训练\n" );
	return 0;
}

/*
开始游泳第1圈
开始游泳第2圈
开始游泳第3圈
开始游泳第4圈
开始游泳第5圈
肚子疼
今天到此为止，结束训练
*/