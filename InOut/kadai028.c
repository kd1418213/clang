#include<stdio.h>
main() {
	long num;

	printf("整数？");
	scanf("%ld", &num);

	printf("2倍すると%ld", num * 2);
	printf("\n3倍すると%ld", num * 3);
	printf("\n4倍すると%ld", num * 4);
}