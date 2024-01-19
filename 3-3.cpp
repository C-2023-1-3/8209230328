#ifndef _mytemperature_h_
#define _mytemperature_h_
double celsius_to_fah(double cel);//摄氏温度到华氏温度
double fahrenheit_to_cels(double fah); //华氏温度到摄氏温度
#endif
#include<iostream>
#include "mytemperature.h";
using namespace std;
int main()
{
	double cel, fah;
	cout << "Celsius Fahrenheit: ";
	cin >> cel;
	printf("%.1f %.1f\n", cel, celsius_to_fah(cel));
	cout << "Fahrenheit Celsius: ";
	cin >> fah;
	printf("%.1f %.2f\n", fah, fahrenheit_to_cels(fah));
	return 0;
}
#include<iostream>
double celsius_to_fah(double cel)
{
	double f;
	f = cel * 1.8 + 32;
	return f;
}
double fahrenheit_to_cels(double fah)
{
	double c;
	c = (fah - 32) / 1.8;
	return c;
}