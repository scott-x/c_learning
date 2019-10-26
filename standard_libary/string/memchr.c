/*
* @Author: scottxiong
* @Date:   2019-10-26 16:05:28
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-26 16:07:07
const void * memchr ( const void * ptr, int value, size_t num );
      void * memchr (       void * ptr, int value, size_t num );

Parameters
ptr
Pointer to the block of memory where the search is performed.
value
Value to be located. The value is passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
num
Number of bytes to be analyzed.
size_t is an unsigned integral type.

Return Value
A pointer to the first occurrence of value in the block of memory pointed by ptr.
If the value is not found, the function returns a null pointer.

In C, this function is only declared as:

void * memchr ( const void *, int, size_t );


*/
/* memchr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) memchr (str, 'p', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %ld.\n", pch-str+1); //'p' found at position 5.
  else
    printf ("'p' not found.\n");
  return 0;
}