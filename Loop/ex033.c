#include<stdio.h>
main() {
	int a, b,c;
	//float c;

	printf("”‚Í? ");
	scanf("%d", &a);

	for (a, b = 0,c=0; a != -999; c++) {
		b += a;
		printf("”‚Í? ");
		scanf("%d", &a);
	}
	printf("‡Œv= %d\t•½‹Ï= %.2f", b, (float)b / c);
}