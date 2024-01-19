//使用循环结构输出下列图形
#include<iostream>
using namespace std;
int main()
{
	char c = '*';
	for (int i = 1; i <= 5; i++)
	{
		for (int m = 1; m <= 5 - i; m++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}
