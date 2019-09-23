/*
* @Author: scottxiong
* @Date:   2019-09-24 04:25:28
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-24 04:32:36
fibonacci: 1,1,2,3,5...
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int f1,f2,f;
	f1=f2=1;
	printf("%5d %5d",f1,f2 );
	for (int i=3;i<=20;i++){
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("%5d",f );
		if (i%5==0) printf("\n");
	}
	return 0;
}
/*
  1     1    2    3    5
    8   13   21   34   55
   89  144  233  377  610
  987 1597 2584 4181 6765
  */