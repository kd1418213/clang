#include<stdio.h>
main() {
	int a, b, c;
	b = 0;
	c = 0;

	printf("����? ");
	scanf("%d", &a);

	do {
		b += a;
		c++;
		printf("����? ");
		scanf("%d", &a);
	} while (a != -999);

	printf("���v= %d\t����= %.2f", b, (float)b / c);
}