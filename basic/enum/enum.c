/*
* @Author: scottxiong
* @Date:   2019-10-07 14:27:02
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 14:47:24
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	enum day { Monday, Tuesday, Wednesday, Thursday=5, Friday, Saturday, Sunday };
    enum day myday = Friday;
    enum day myday1 = Tuesday;
    enum day myday2 = 10;
    enum day myday3 = 0;
    //enum day myday2 = Tuesday1; error: use of undeclared identifier 'Tuesday1'; 
    printf("%d\n",myday );//6
    printf("%d\n",myday1 );//1
    printf("%d\n",myday2 );//10
    printf("%u\n",myday3 );//0
	return 0;
}