#include<stdio.h>
main() {
	double x, y;
	printf("�Q�̎����l? ");
	scanf("%lf%lf", &x, &y);
	printf("%.1f��%.1f�̎l�����Z\n",x,y);
	printf("�a=%f ��=%f ��=%f ��=%f", x + y, x - y, x * y, x / y);
}