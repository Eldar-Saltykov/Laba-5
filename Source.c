#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
void main()
{
	/*int  c;
	double x, y, a, res1, res2;
	c = 2, a = 7.1e-9;
	setlocale(LC_ALL, "RUS");
	puts("Введите x ");
	scanf("%lf", &x);
	puts("Введите y ");
	scanf("%lf", &y);
	res1 = pow(a, 5) + pow(sin(y - c), 4);
	res2 = pow(sin(x + y), 3) + fabs(x - y); 
	printf(" Значение F = %lf", res1 / res2); */
	double x, t = 0.3, b, a, y;
	setlocale(LC_ALL, "RUS");
	puts("Вариант 10\n Введите значение х");
	scanf("%lf", &x);
	a = log10(fabs(t * x + pow(t, 2)));
	b = x * pow(t, 2) + sqrt(x);
	y = log(pow(a,2) /( a + b));
	printf("Значение у = %.2lf", y);

}