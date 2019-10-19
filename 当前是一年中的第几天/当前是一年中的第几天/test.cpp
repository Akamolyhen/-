#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		int _day[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };//平年情况
		int number = _day[month - 1] + day;
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))//闰年的判断
		{
			if (month > 2)
			{
				number++;
				cout << number << endl;
				continue;
			}
		}
		cout << number << endl;
		continue;
	}
	system("pause");
	return 0;
}