#include<iostream>
using namespace std;
class Point
{
private: 
	int x;
	int y;
public:
	Point(int newx, int newy);
	void setpoint(int i, int j);
	void display();
};
Point::Point(int newx, int newy)
{
	x = newx;
	y = newy;
}
void Point::setpoint(int i, int j)
{
	x = x + i;
	y = y + j;
}
void Point::display()
{
	cout << x << ' ' << y << endl;
}
int main()
{
	int i, j;
	cin >> i >> j;
	Point a(60, 80);
	a.setpoint(i, j);
	a.display();
	return 0;
}

#include<iostream>
using namespace std;
class point
{
private:
	int x, y;
	int i, j;
public:
	point(int a, int b);
	void setpoint(int c, int d);
	void show();
};
point::point(int a, int b)
{
	x = a; y = b;
};
void point::setpoint(int c, int d)
{
	this->x = this->x + c;
	this->y = this->y + d;
}
void point::show()
{
	cout << x << ' ' << y;
}
int main()
{
	int m, n;
	cin >> m >> n;
	point a(60+m, 80+n);
	a.setpoint(m, n);
	a.show();
}