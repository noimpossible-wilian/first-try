#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int sum(int* arr,int i,int len)//���鴫�ݵ������ַ���ַ�����Խ����ý��ܡ�
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
	int tap=sum(arr,i,len);//����ֵ��Ӧ����һ���������յģ��Ͼ��ֲ��������޷����ݵģ����������ʱ�����ƾ���;
	printf("%d\n", tap);
	return 0;
}