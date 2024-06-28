#include<stdio.h>
main() {
	int num = 1, gokei = 0;
	printf("1");
	while (gokei < 300) {
		num++;
		gokei += num;
		printf("+%d", num);
	}
	printf("=%d", gokei+1);
}