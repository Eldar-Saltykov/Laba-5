#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

void main()
{
	double x, t = 0.3, b, a, y;
	setlocale(LC_ALL, "RUS");
	puts("Вариант 10\n Введите значение х");
	scanf("%lf", &x);
	b = x * pow(t,2) + sqrt(x);
	a = log10(fabs(t * x + pow(t,2)));
	y = log(a * a / a + b);
	printf("Значение у = %lf", y); 


}
