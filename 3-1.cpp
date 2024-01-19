//输入自然数m和n，
#include<iostream>
using namespace std;
int ys(int, int);
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "最大公约数为 " << ys(m,n) << endl;
	return 0;
}
int ys(int a, int b)
{
	int B;
for(int i=1;i<=a&&i<=b;i++)
	{
		if (a%i== 0 && b%i == 0)
		{
			B = i;
		}
	}
	return B;
}