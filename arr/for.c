/*
* @Author: scottxiong
* @Date:   2019-09-20 14:50:14
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-20 14:51:07
  for loop
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;
	int i;

	for (i = 0; i < 10; i++) {
	    sum += array[i];
	}

	/* sum now contains a[0] + a[1] + ... + a[9] */
	printf("Sum of the array is %d\n", sum); //Sum of the array is 55
	return 0;
}