#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	float a, x0, x1;
	printf("������a��ֵ��");
	scanf("%f", &a);
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	do {
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	} while (fabs(x0 - x1) >= 1e-5);

	printf("%f��ƽ��=%f", a, x1);
	return 0;
}