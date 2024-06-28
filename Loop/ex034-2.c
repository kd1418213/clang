#include<stdio.h>
main() {
	int a, b;

	printf("”‚ÍH ");
	scanf("%d", &a);

	do {
		b = 0;
		do {
			printf("*");
			b++;
		} while (b < 5);
		printf("\n");
		a--;
	} while (a > 0);
}