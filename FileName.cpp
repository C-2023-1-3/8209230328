/// 输入一个字符，如果为小写，转换为大写输出，否则，输出其后继字符的ASCII码值
#include<iostream>

using namespace std;

int main()

{

	char a;

	a = getchar();

	if (a >= 'a' && a <= 'z')

		putchar(a - 32);

	else

		cout << a + 1 << endl;

	return 0;
}

