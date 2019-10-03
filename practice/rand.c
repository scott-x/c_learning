/*
* @Author: scottxiong
* @Date:   2019-10-04 03:11:28
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-04 03:24:08
*/
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char op[] = {'+','-','*','/'};
	srand(time(NULL));
	int randomNum = rand()%4+1;
	switch (randomNum) {
		case 1:
		   printf("%c\n",op[0]);
		   break;
		case 2:
		  printf("%c\n",op[1]);
		   break;
		case 3:
		   printf("%c\n",op[2]);
		   break;
        case 4:
		   printf("%c\n",op[3]);
		   break;  
	}
	return 0;
}

/*
rand.c:13:18: warning: implicit declaration of function 'rand' is invalid in C99
      [-Wimplicit-function-declaration]
*/      
