#include<iostream>
using namespace std;
int main()
{
	int a, b, c, s;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a);
	
	{
		s = a + b + c;
		cout << s << endl;
		if (a == b || b == c || a == c)
			cout << "This is an isosceles triangle" << endl;

		else
			cout << "This is not an isosceles triangle " << endl;
	}

	cout << "This is not a triangle" << endl;
		
	return 0;
}