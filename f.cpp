//入一行字符，分别统计出其中英文字母、空格、数字字符和其它字符的个数。
#include<iostream>
using namespace std;
int main()
{
	char c;
	int english = 0, num = 0, space = 0, other = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') { english++; }
		else if (c == ' ') { space++; }
		else if (c >= '0' && c <= '9') { num++; }
		else  other++;
	}
	cout << "英文字母：" << english << "\n空格：" << space << "\n数字字符：" << num << "\n其他字符："
		<< other << endl;
	return 0;
}
