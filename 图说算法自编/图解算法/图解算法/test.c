#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int sum(int* arr,int i,int len)//数组传递的是首字符地址，所以解引用接受。
{
	if (i == len)
		return 0;
	return arr[i] + sum(arr, i + 1, len);
	
}
int main()
{
	int arr[] = { 3,4,4,7,8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int tap=sum(arr,i,len);//返回值是应该找一个东西接收的，毕竟局部变量是无法传递的，传递数组的时候传名称就行;
	printf("%d\n", tap);
	return 0;
}