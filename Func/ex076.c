#include<stdio.h>
void result(int x, int y, int* gokei, float* heikin);
main() {
	int a, b, c;
	float d;
	printf("�������Q����: ");
	scanf("%d%d", &a, &b);
	result(a, b, &c, &d);
	printf("���v��%d�A���ς�%.2f",c,d);
}
void result(int x, int y, int* gokei, float* heikin) {
	*gokei = x + y;
	*heikin = (float)*gokei / 2.0;
	return;
}