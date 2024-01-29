//输入一个华氏温度，要求输出摄氏温度。要求结果保留2位小数。
#include <iostream>
using namespace std;
int main()
{
	double C;
	double F;
	cout << "请输入华氏温度 F = ";
	cin >> F;
	C = 5*(F - 32) / 9;
	cout.precision(4);
	cout << "摄氏温度为" << C << endl;
}