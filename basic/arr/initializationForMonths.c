/*
* @Author: sottxiong
* @Date:   2019-10-08 08:03:36
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-10-08 08:07:22
*/
#include <stdio.h>
#define MONTHS 12

int main(int argc, char const *argv[])
{
	//initialization
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31,30,31,31,30 };
	//loop
    for (int i = 0; i < MONTHS; ++i)
    {
    	printf("Month %d has %2d days\n", i+1, days[i]);
    }
	return 0;
}

/*
Month 1 has 31 days
Month 2 has 28 days
Month 3 has 31 days
Month 4 has 30 days
Month 5 has 31 days
Month 6 has 30 days
Month 7 has 31 days
Month 8 has 31 days
Month 9 has 30 days
Month 10 has 31 days
Month 11 has 31 days
*/