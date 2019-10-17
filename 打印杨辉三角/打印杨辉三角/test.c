#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define L 10//设置打印杨辉三角的行数；


int main()
{
	int i = 0;
	int j = 0;
	int arr[L][L] = { 0 };
	for (i = 0; i < L; i++)
	{
		arr[i][0] = 1;//将第一列的所有元素赋1；
	}
	for (i = 1; i < L; i++)
	{
		for (j = 1; j < L; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//从第二行往下每行的第二个元素都是上一行向左偏一个单位和正上方元素之和；
		}
	}
	for (i = 1; i < L; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("     %d     ", arr[i][j]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}