#include <iostream>
using namespace std;
int main()
{
    unsigned int testUnint = 65535;//0xffff
    cout << "output in char type:" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;
    cout << "output in int type:" << static_cast<int> (testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;

    return 0;
}