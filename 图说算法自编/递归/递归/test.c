#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int fact(int i)
{
	if (i == 1)
	{
		return 1;
	}
	else
	{
		return i * fact(i - 1);
	}
}
int main()
{
	
	fact(5);
	return 0;
}