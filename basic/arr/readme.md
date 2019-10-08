# initializing a two demensional array

two-dimensional arrays can be initialied in the same manner of a one-dimensional array.

When listing elements for initialization, the value are listed by row
 - the diffirnts is that you put the initial values for each row between braces, `{}`, and then enclose all rows between braces.

 ```c
 int numbers[3][4] = {
 	{10,20,30,40}, //value for first row
 	{15,12,2,3},  //value for second row
 	{4,3,9.0}. //value for 3rd row
 }
 ```
 commas are required after each brace that closes off a row, except in the case of the final row.

 **initializing a 2D array**

 as with one-dimensional arrays, it's not required that the entire array be initialized.

 ```c
 int matrix[4][5]={
 	{10,4,5},
 	{3,2,1},
 	{8,9,0}
 }
 ```
 Olny initializs the first three elements of each row of the matrix to the indicated value

 - remaining values are set to 0
 - In this case, the inner paris of braces are required to force the correct initialization.


 ### designated initialized

 subscripts can also be used in the initilization list, in a like manner to single-dimensional arrays

 ```c
 int matrix[4][3] = {[0][0]=1, [1][1]=2,[5][5]=3};
 ```
 initializes the three indicates elements of matrix to the specified values
 - unspecified elements are set to 0 by default
 - each set of values that initializes the elements in a row is between braces
 - the entire initialization goes between another pair of braces
 - the value for a row are separated by comma

 ### other dimentions

Everything mentioned so far about two-dimenstional arrays can be generalized to three-dimensional arrays and further.

you can declare a three-dimentional array yjis way:

```c
int box[10][20][30];
```
- you can visualize a one-diemntional array as a row of data
- you can visualize a two-diemntional array as a table of data, matrix, or a spreadsheet
- you can visualize a three-diemntional array as a stack of data tables
- tipically, you would use 3 nested loops to process a three-dimential array, four nested loop process a four-dimensional array, and so on.

### inlializing an array of more than 2 dimensions
- for array of 3 or more dimensions, the process of initialization is extended
- a three-dimensional array will have e levels of nested braces, with the inner lever containing sets of initializing values for a row

```c
int numbers[2][3][4] = {
	{ //first block of 3 rows
		{10,20,30,40},
		{15,25,35,45},
		{16,26,36,46}
	},
	{ //second block of 3 rows
		{10,20,30,40},
		{15,25,35,45},
		{16,26,36,46}
	}
}
```
