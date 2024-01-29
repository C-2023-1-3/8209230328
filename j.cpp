#include<stdio.h>
int main()
{
	char c;
	int y = 0, s = 0, k = 0, z = 0;
	printf("请输入一串字符：");
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
	printf("英文字母有%d个，数字有%d个，空格有%d个，其他字符有%d个", y, s, k, z);
}