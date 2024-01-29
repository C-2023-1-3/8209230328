#include <iostream>
using namespace std;
int main()
{
	double a, b, c, L;
	cout << "三角形的三边 a , b , c : " << endl;
	cin >> a >> b >> c;
	L = a + b + c;
	if ((a + c > b && a + b > c) && (b + c > a && b + a > c) && (c + a > b && c + b > a)) {
		cout << "三角形的周长为 : " << L << endl;
		if (a != b && a != c && b != c)
			cout << "这不是一个等腰三角形" << endl;
		else
			cout << "这是一个等腰三角形" << endl;
	}
	else
		cout << "Three sides do not meet the definition of triangle. Please enter the three sides again" << endl;
	return 0;
}