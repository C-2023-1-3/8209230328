#include <iostream>
using namespace std;
int main()
{
	double a, b, c, L;
	cout << "�����ε����� a , b , c : " << endl;
	cin >> a >> b >> c;
	L = a + b + c;
	if ((a + c > b && a + b > c) && (b + c > a && b + a > c) && (c + a > b && c + b > a)) {
		cout << "�����ε��ܳ�Ϊ : " << L << endl;
		if (a != b && a != c && b != c)
			cout << "�ⲻ��һ������������" << endl;
		else
			cout << "����һ������������" << endl;
	}
	else
		cout << "Three sides do not meet the definition of triangle. Please enter the three sides again" << endl;
	return 0;
}