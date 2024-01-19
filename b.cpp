//输入x计算表达式的值
#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x > 0 && x < 1) { y = 3 - 2*x; }
	if (x >= 1 && x < 5) { y = 1 /( 2*x) + 1; }
	if (x >= 5 && x <= 10) { y = x * x; }
	cout << y << endl;
	return 0;
}
