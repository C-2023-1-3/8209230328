#include<stdio.h>

int main()

{

	char x, y;

	printf(" ������һ����ĸ��");

	scanf("%c", &x);

	if (x >= 'a' && x <= 'z')

		y = x - 32;

	if (x >= 'A' && x <= 'Z')

		y = x + 32;

	printf("ת������ַ�Ϊ��%c\n", y);

}