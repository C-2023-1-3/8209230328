#include<stdio.h>

int main()

{

	char x, y;

	printf(" 请输入一个字母：");

	scanf("%c", &x);

	if (x >= 'a' && x <= 'z')

		y = x - 32;

	if (x >= 'A' && x <= 'Z')

		y = x + 32;

	printf("转换后的字符为：%c\n", y);

}