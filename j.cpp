#include<stdio.h>
int main()
{
	char c;
	int y = 0, s = 0, k = 0, z = 0;
	printf("������һ���ַ���");
	while ((c = getchar()) != '\n')
	{
		if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'z')
			y++;
		else if (c <= '9' && c >= '0')
			s++;
		else if (c == ' ')
			k++;
		else
			z++;
	}
	printf("Ӣ����ĸ��%d����������%d�����ո���%d���������ַ���%d��", y, s, k, z);
}