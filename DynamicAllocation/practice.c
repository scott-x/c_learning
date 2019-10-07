/*
* @Author: scottxiong
* @Date:   2019-10-07 19:35:32
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 21:32:35
参考: http://www.runoob.com/w3cnote/c-dynamic-array.html
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   int rows =7;
   int **arr;
   //alloc memory
   //外层分配
   arr = (int**) calloc(rows,sizeof(int *));
   for (int i = 0; i < rows; i++)
   {
    //内层分配
     arr[i] = (int *) calloc(i+1,sizeof(int));
   }
   
   //assign value
   for (int i = 0; i < rows; i++)
   {
     for (int j = 0; j <=i; j++)
     {
        //第一列或最后一列都为1
        if (j==0 || j==i) {
          arr[i][j]=1;
        }else{
         arr[i][j]= arr[i-1][j-1]+arr[i-1][j];
        }
        
     }
   }

   //print
   for (int i = 0; i < rows; i++)
   {
     for (int j = 0; j <=i; j++)
     {
        printf("%d ",arr[i][j] );
     }
     printf("\n");
   }

   //release meory: 从内到外
   for (int i = 0; i < rows; i++)
   {
    //内层分配
     free(arr[i]);
   }
   free(arr);
   
   return 0;
}

/*
1

1 1

1 2 1

1 3 3 1

1 4 6 4 1

1 5 10 10 5 1

1 6 15 20 15 6 1
*/