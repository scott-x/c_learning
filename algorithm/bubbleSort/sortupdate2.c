/*
* @Author: scottxiong
* @Date:   2019-10-17 22:07:28
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-17 23:02:55
*/
#include <stdio.h>
#define N 6

void Swap(int *a,int *b);
void printResult(int arr[], int n);
void bubbleSort(int arr[], int n);
void InputData(int arr[],int n);

int main(int argc, char const *argv[])
{
	int arr[N];
	InputData(arr,N);
	printf("冒泡排序前:");
	printResult(arr,N);
	bubbleSort(arr,N);
	printf("冒泡排序后:");
	printResult(arr,N);
	return 0;
}

void printResult(int arr[], int n){
	for (int i =0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubbleSort(int arr[], int n){
	int sorted = 1;
	for (int i=0; sorted && i<n; i++) {
		for (int j = 0; j<n-1-i; j++){
          if (arr[j]>arr[j+1]) {
          	sorted = 1;
			int temp;
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1]=temp;
		  }
		}
	}
}
void InputData(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("请输入第%d个整型数据:",i+1);
		scanf("%d",&arr[i]);
	}
}

/*
请输入第1个整型数据:7
请输入第2个整型数据:3
请输入第3个整型数据:5
请输入第4个整型数据:9
请输入第5个整型数据:6
请输入第6个整型数据:8
冒泡排序前:7 3 5 9 6 8 
冒泡排序后:3 5 6 7 8 9 
*/

