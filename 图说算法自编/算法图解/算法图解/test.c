
#include<stdio.h>
#include <stdlib.h>
void display(int* array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
int partition(int *arr, int left, int right)
{
	int pivot = arr[right];
	while (left < right)
	{
		while (arr[left] <= pivot && left < right)
		{
			left++;
		}
		

			arr[right] = arr[left];
		

		while (arr[right] >= pivot && left < right)
		{
			right--;
		}
		
			arr[left] = arr[right];
		

	}
	arr[right] = pivot;//确保递归的正常进行，使其在后来的运算中不变数；
	//int q=right;
	return right;
}
void quick_sort(int *arr, int left, int right)
{
	if (left < right)
	{
		int q = partition(arr, left, right);
		quick_sort(arr, left, q - 1);
		quick_sort(arr, q + 1, right);
	}
}

int main()
{
	int arr[] = {1,3,4,2,5};
	quick_sort(arr, 0, 4);
	display(arr, 5);



	return 0;
}