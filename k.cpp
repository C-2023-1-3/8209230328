//�Լ���̲���һ�½�testUnint��8�������<<oct;je_��һ��ʵ��ת����int,�۲���
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:"" << testUnint<< end;<<oct>>;
		cout << "output in char type:!" << static_ cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_ cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_ cast<int>. (testUnint) << endl;
	cout << "output in double type:" << static cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_ cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	system("pause");
	return 0;
}