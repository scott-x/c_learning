/*
* @Author: scottxiong
* @Date:   2019-09-20 14:09:55
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:13:49
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score=91;
    int rank =2;
    if (score>90){
    	printf("perfect\n");
    	if (rank>=2){
    		printf("can eat out\n");
    	}
    }else if (score>80){
    	printf("good\n");
    }else{
    	printf("too bad\n");
    }
	return 0;
}

/*
perfect
can eat out
*/