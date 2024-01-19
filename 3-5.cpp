//猴子吃桃
#include<iostream>
using namespace std;
int f(int a);
int main()
{
	int a = 1;
	cout << "第一天所摘桃子数为"<<f(a)<<endl;
	return 0;
}
int f(int a)
{
	int num;
	if (a == 10)
	{
		num = 1;
		return num;
	}
	else
		num = (f(a + 1) + 1) * 2;
	return num;
}