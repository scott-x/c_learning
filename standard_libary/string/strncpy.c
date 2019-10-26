/*
* @Author: scottxiong
* @Date:   2019-10-26 14:18:11
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 14:44:38
char * strcpy ( char * destination, const char * source );
strncpy的用法：
1，  需引入头文件 string.h
2,   要保证destination有足够的空间：你可以用malloc或者给个大点的数组空间eg: char name[100];
3,   Parameters
		destination
		Pointer to the destination array where the content is to be copied.
		source
		C string to be copied.
		num
        Maximum number of characters to be copied from source.
        size_t is an unsigned integral type.

*/
/* strncpy example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  strncpy ( str2, str1, sizeof(str2) );

  /* partial copy (only 5 chars): */
  strncpy ( str3, str2, 5 );
  str3[5] = '\0';   /* null character manually added */

  puts (str1); //To be or not to be
  printf("length of str1: %lu\n",strlen(str1)); //length of str1: 18
  puts (str2); //To be or not to be
  puts (str3); //To be
  printf("length of str3: %lu\n",strlen(str3)); //5

  return 0;
}

/*
To be or not to be
To be or not to be
To be
*/
