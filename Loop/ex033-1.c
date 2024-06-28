#include<stdio.h>
main() {
	int a, b, c;
	b = 0;
	c = 0;

	printf("”‚Í? ");
	scanf("%d", &a);

	do {
		b += a;
		c++;
		printf("”‚Í? ");
		scanf("%d", &a);
	} while (a != -999);

	printf("‡Œv= %d\t•½‹Ï= %.2f", b, (float)b / c);
}