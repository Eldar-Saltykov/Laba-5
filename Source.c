#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

void main()
{
	int gr;
	float gr1;
	setlocale(LC_ALL, "RUS");
	puts("������� �������");
	scanf(" %d", &gr);
	gr1 = sin(gr * M_PI / 180);
	printf("��� ����� %.6f ������", gr1);

}
