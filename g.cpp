//编写一个程序：从键盘上输入两个正整数，求 a 和 b 的最大公约数与最小公倍数。
#include<iostream>
using namespace std;
int main()
{
    int a, b, X, Y;
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0) { X= i; }
    }
    for (int i = 1;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            Y = i; break;
        }
    }
    cout << a << "和" << b << "最大公约数" << X << endl;
    cout << a << "和" << b << "最小公倍数" << Y << endl;
    return 0;
}