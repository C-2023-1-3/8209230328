//��дһ�����򣺴Ӽ����������������������� a �� b �����Լ������С��������
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
    cout << a << "��" << b << "���Լ��" << X << endl;
    cout << a << "��" << b << "��С������" << Y << endl;
    return 0;
}