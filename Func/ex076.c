#include<stdio.h>
void result(int x, int y, int* gokei, float* heikin);
main() {
	int a, b, c;
	float d;
	printf("整数を２つ入力: ");
	scanf("%d%d", &a, &b);
	result(a, b, &c, &d);
	printf("合計は%d、平均は%.2f",c,d);
}
void result(int x, int y, int* gokei, float* heikin) {
	*gokei = x + y;
	*heikin = (float)*gokei / 2.0;
	return;
}