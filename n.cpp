//ƻ��ÿ�� 0.8 Ԫ����һ���� 2 �����ڶ��쿪ʼ��ÿ����ǰ��� 2 ����ֱ�������ƻ����������100�����ֵ����ÿ��ƽ��������Ǯ
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