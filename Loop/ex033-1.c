#include<stdio.h>
main() {
	int a, b, c;
	b = 0;
	c = 0;

	printf("数は? ");
	scanf("%d", &a);

	do {
		b += a;
		c++;
		printf("数は? ");
		scanf("%d", &a);
	} while (a != -999);

	printf("合計= %d\t平均= %.2f", b, (float)b / c);
}