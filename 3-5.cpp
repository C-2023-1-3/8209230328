//���ӳ���
#include<iostream>
using namespace std;
int f(int a);
int main()
{
	int a = 1;
	cout << "��һ����ժ������Ϊ"<<f(a)<<endl;
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