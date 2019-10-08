/*
* @Author: sottxiong
* @Date:   2019-10-08 10:42:41
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-10-08 11:34:12
example output
------------------
Year  RAINFALL(inches)
2010  32.4
2011  37.9
2012  49.8
2013  44.0
2014  32.9

The yearly average is 39.4 inches

MONTHLY AVERAGEs:
Jan Feb Mar Apr May Jun Jul Aug Sep Oct Dec Nov
7.3 7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7
*/

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

int main(int argc, char const *argv[])
{
	//initial your 2D array with hard-code rainfall amounts
	//initail rainfall data from 2011-2015
    float rian[YEARS][MONTHS] = {
    	{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    	{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    	{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    	{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    	{7.6,5.6,3.8,3.8,0.2,0.0,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year,month;
    float subtotal, total;
    printf(" YEAR\t\tRAINFALL (inches)\n");
    for (year=0,total=0; year < YEARS; ++year)
    {
    	for(month=0,subtotal=0;month<MONTHS;month++){
    		subtotal += rian[year][month];
    	}
    	printf("%5d \t\t%8.1f\n", 2010+year,subtotal);
    	total += subtotal;
    }
    printf("The yearly average is %.1f inches.\n",total/YEARS);
    printf("MONTHLY\t\t AVERAGES:\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Dec Nov\n");

    
    for (int i = 0; i < MONTHS; ++i)
    {
    	float monthTotal=0.0;
    	for (int j = 0; j < YEARS; ++j)
    	{
    		monthTotal+= rian[j][i];
    	}
    	printf("%.1f ",monthTotal/YEARS);
    }
	return 0;
}

/*
YEAR		RAINFALL (inches)
 2010 		    32.4
 2011 		    37.9
 2012 		    49.8
 2013 		    44.0
 2014 		    30.1
The yearly average is 38.8 inches.
MONTHLY		 AVERAGES:
Jan Feb Mar Apr May Jun Jul Aug Sep Oct Dec Nov
7.3 7.3 4.9 3.2 1.6 0.6 1.2 0.3 0.5 1.7 3.6 6.7 
*/

// 总结：二维数组遍历行、列的顺序是有区别的：如果想先拿到行就先遍历行，想先拿到列，就先遍历列