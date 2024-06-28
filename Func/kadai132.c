#include<stdio.h>
main() {
	int num, sum = 0, count = 0;
	printf("®”H");
	while (scanf("%d",&num) != EOF) {
		sum += num;
		count++;
		printf("®”H");
	}
	printf("‡Œv=%d\n•½‹Ï=%.1f", sum, (float)sum / (float)count);
}