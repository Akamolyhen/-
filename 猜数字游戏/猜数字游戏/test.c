#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("***************************************\n");
	printf("************* 猜数字游戏 **************\n");
	printf("***************************************\n");
	int input = 0,qianwei=0,baiwei=0,shiwei=0,gewei=0;
	while (1)
	{
		printf("请输入要猜的这个数字(四位数，并且各个位置上的数字不重复)-->");
		scanf("%d", &input);
		if (input > 9999 || input < 1000)
		{
			printf("设定的数字不符合规则，请重新输入！\n");
			continue;
		}
		qianwei = input / 1000;
		baiwei = (input - qianwei * 1000)/100;
		shiwei = (input-qianwei*1000-baiwei*100)/10;
		gewei = input - qianwei * 1000 - baiwei * 100 - shiwei * 10;
		if (qianwei == baiwei || qianwei == shiwei || qianwei == gewei || baiwei == shiwei || baiwei == gewei || shiwei == gewei)
		{
			printf("设定的数字不符合规则，请重新输入！\n");
			continue;
		}
		printf("设置成功！\n");
		//printf("%d-%d-%d-%d\n", qianwei,baiwei,shiwei,gewei);
		break;
	}
	while (1)
	{
		printf("请输入你的猜测结果(一个四位数)-->");
		int user = 0;
		scanf("%d", &user);
		if (user > 9999 || user < 1000)
		{
			printf("猜测的结果不符合规则，请重新输入！\n");
			continue;
		}
		int qianwei_ = user / 1000;
		int baiwei_ = (user - qianwei_ * 1000) / 100;
		int shiwei_ = (user - qianwei_ * 1000 - baiwei_ * 100) / 10;
		int gewei_ = user - qianwei_ * 1000 - baiwei_ * 100 - shiwei_ * 10;
		//printf("%d-%d-%d-%d\n", qianwei_, baiwei_, shiwei_, gewei_);
		int count_a = 0;//count_a表示本次猜对的数字的个数；
		int count_b = 0;//count_b表示本次猜对的数字并且位置正确的个数；
		if (qianwei_ == qianwei || qianwei_ == baiwei || qianwei_ == shiwei || qianwei_ == gewei)
		{
			count_a++;
			if (qianwei_ == qianwei)
			{
				count_b++;
			}
		}
		if (baiwei_ == qianwei || baiwei_ == baiwei || baiwei_ == shiwei || baiwei_ == gewei)
		{
			count_a++;
			if (baiwei_ == qianwei_)
			{
				count_a--;
			}
			if (baiwei_ == baiwei)
			{
				count_b++;
			}
		}
		if (shiwei_ == qianwei || shiwei_ == baiwei || shiwei_ == shiwei || shiwei_ == gewei)
		{
			count_a++;
			if (shiwei_ == qianwei_ || shiwei_ == baiwei_)
			{
				count_a--;
			}
			if (shiwei_ == shiwei)
			{
				count_b++;
			}
		}
		if (gewei_ == qianwei || gewei_ == baiwei || gewei_ == shiwei || gewei_ == gewei)
		{
			count_a++;
			if (gewei_ == qianwei_ || gewei_ == baiwei_ || gewei_ == shiwei)
			{
				count_a--;
			}
			if (gewei_ == gewei)
			{
				count_b++;
			}
		}
		if (qianwei_ == qianwei && baiwei_ == baiwei && shiwei_ == shiwei && gewei_ == gewei)
		{
			printf("恭喜您猜对了！\n");
			break;
		}
		printf("不好意思，您猜错了！\n");
		printf("提示：%dA%dB\n",count_a,count_b);
	}
	
	system("pause");
	return 0;
}