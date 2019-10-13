#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int input = 0,count=0;
	while (cin >> input)
	{
		count = 0;
		while (input)
		{
			if ((input & 1) == 1)
				count++;
			input = input >> 1;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}