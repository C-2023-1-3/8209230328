//����һ�������¶ȣ�Ҫ����������¶ȡ�Ҫ��������2λС����
#include <iostream>
using namespace std;
int main()
{
	double C;
	double F;
	cout << "�����뻪���¶� F = ";
	cin >> F;
	C = 5*(F - 32) / 9;
	cout.precision(4);
	cout << "�����¶�Ϊ" << C << endl;
}