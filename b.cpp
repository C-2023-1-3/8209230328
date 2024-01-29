//2.求圆锥的体积：要求键盘输入圆锥底的半径、锥高，使用标识符常量定义圆周率。
#include<iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double r;
	double h;
	double v;
	cout << "Please enter 圆锥的底面半径 r = ";
	cin >> r;
	cout << "Please enter 圆锥的高 h = ";
	cin >> h;
	v = PI * r * r * h / 3;
	cout << "圆锥的体积v = " << v << endl;
	return 0;
}