/*
* @Author: sottxiong
* @Date:   2019-09-20 20:10:39
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-09-20 20:20:01
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int score = 89;
	switch (score/10){
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
		case 7:
		    printf("B\n");
		    break;
		case 6:
		   printf("C\n");
		   break;   
		default:
		   printf("D\n");
		   break;   
	}
	return 0;
}

/*
B
*/