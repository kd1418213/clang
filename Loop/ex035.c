#include<stdio.h>
main() {
	int num, a;
	a = 0;
	do {
		printf("”‚ğ“ü‚ê‚Ä ");
		scanf("%d", &num);
		if (num == -999)break;
		a += num;
	} while (1);
	printf("‡Œv‚Í%d", a);
}