//������Ȼ��m��n��
#include<iostream>
using namespace std;
int ys(int, int);
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "���Լ��Ϊ " << ys(m,n) << endl;
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