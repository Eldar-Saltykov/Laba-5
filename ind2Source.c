#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
void main()
{
	int  d;
	double x, y;
	d = 1;
	setlocale(LC_ALL, "RUS");
	puts("Введите x ");
	scanf("%lf", &x);
	puts("Введите y ");
	scanf("%lf", &y);
	printf(" Значение F(x,y) = %lf",(pow(cos(y),3) + pow(2,x)*d) / (exp(y) + log((pow(sin(x),2)) + 7.4)));

}
