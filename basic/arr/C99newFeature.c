/*
* @Author: sottxiong
* @Date:   2019-10-08 07:54:54
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-10-08 08:09:46
C99 add a new feature called designated initializers
 - allow you to pick and choose elements are initialized

 by enclosing ab element number in pair of brackets, 
 specific array elements can be initialied in an order

 float sample_data[500] = { [2]=300.0,[4]=100.2,[0]=0.0 };
 - initialied the sampled_data to 300.0, 100.2, and 0.0 for the first
 3 values.

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[30] = {[2]=12,[18]=22,[7]=13};
	printf("%d\n",arr[12] ); //0
	printf("%d\n",arr[18] ); //22
	return 0;
}