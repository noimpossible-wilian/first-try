#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int findsmallest(int*arr)
{
	int smallest = arr[0];
	int smallest_index = 0;
	int i = 0;
	for (i = 1; i < 5; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_index = i;
		}
	}
	return smallest_index;
}
int selection(int*arr)
{
	int* newarr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		int smallest = findsmallest(arr);
          newarr[i] = arr[smallest];
		  arr[smallest] = INT_MAX;
	}
	return newarr;
	/*free(newarr);
	newarr = NULL;
		*/
}
int main()
{
	
	int arr[] = { 5,3,6,2,10 };
	int *sortarr = selection(arr);//传入的是指针应该解引用接受；
	int i = 0;
	for (i = 0; i < 5; i++)
	{
        printf("%d", sortarr[i]);
	}
	/*free(sortarr);
	sortarr = NULL;*/
	
	return 0;
}