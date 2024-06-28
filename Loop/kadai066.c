#include<stdio.h>
main() {
	int num = 1, gokei = 0;
	printf("1");
	do {
		num++;
		gokei += num;
		printf("+%d", num);
	} while (gokei < 300);
	printf("=%d", gokei + 1);
}