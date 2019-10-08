/*
* @Author: sottxiong
* @Date:   2019-10-08 09:23:50
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-10-08 09:52:39
print the prime numbers from 1-100
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 2; i < 100; ++i)
	{
		_Bool flag = 0;
		for (int j = 2; j <= i; ++j)
		{
			if (i==j)
			{
				if (i==2){
					printf("%d ", j);
				    break;
				}
			}
			if (i!=j){
				if (i%j==0)
				{
					flag = 0;
					break;
				}
				flag = 1;
			}
		}
		if (flag){
			printf("%d ",i );
		}
		
        
	}
	return 0;
}

/*
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/