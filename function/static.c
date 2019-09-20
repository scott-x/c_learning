/*
* @Author: scottxiong
* @Date:   2019-09-20 15:20:57
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 15:21:28
*/
#include<stdio.h>
int runner() {
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner()); //1
    printf("%d ", runner());  //2
    return 0;
}