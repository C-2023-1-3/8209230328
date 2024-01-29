//苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱
#include<iostream>
using namespace std;
int main()
{
	int num, sum, d;
	d = 0;
	sum = 0;
	for (int i = 2; i <= 100; i *= 2)
	{
		num = i;
		sum = sum + num;
		d++;
	}
	cout << 0.8 * sum / d << endl;
	return 0;
}