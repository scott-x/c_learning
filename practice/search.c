/*
* @Author: scottxiong
* @Date:   2019-09-24 00:13:30
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-24 03:14:45
*/
#include <stdio.h>

//找出2～200之间的素数

int main(int argc, char const *argv[])
{
	int counts =0;
	for (int i = 3; i <= 200; ++i)
	{
		 for(int j=2; j<=i; ++j){
		 	if (i%j==0 && j!=i){
		 		break;
		 	}else{
		 		if (j==i){
		 			// printf("%d是素数\n",i );
                    printf("%4d", i);
                    counts++;
                    if (counts%5==0){
                    	printf("\n");
                    }
		 		}
		 	}
		 }	
	}
	 
	return 0;
}


/*
 3   5   7  11  13
  17  19  23  29  31
  37  41  43  47  53
  59  61  67  71  73
  79  83  89  97 101
 103 107 109 113 127
 131 137 139 149 151
 157 163 167 173 179
 181 191 193 197 199
 */