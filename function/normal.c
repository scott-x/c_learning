/*
* @Author: scottxiong
* @Date:   2019-09-20 15:19:42
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 15:20:35
*/
#include <stdio.h>

int runner() {
    int count = 0;
    count++;
    return count;
}

int main(int argc, char const *argv[])
{
	printf("%d ", runner()); //1
    printf("%d ", runner()); //1
    return 0;
}