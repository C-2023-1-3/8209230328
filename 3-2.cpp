//写程序满足：声明一个函数，判断一个整数是否为素数，
#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num);
int main()
{
    int n = 0;
    for (int i = 2;; i++)
    {
        if (is_prime(i))
        {
            cout << setw(5) << i << " ";
            n++;
            if (n > 0 && (n % 10 == 0)) 
            {
                cout << endl; 
            }
        }
        if (n == 200) 
        { 
            break; 
        }
    }
    return 0;
}
bool is_prime(int num)
{
    int x;
    bool prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) 
        {
            prime = false;
            break;
        }
    }
    return prime;
}