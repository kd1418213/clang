#include<stdio.h>
main() {
	int i;
	printf("  ");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 0; i <= 9; i++) {
		printf("===");
	}
	printf("\n1|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i);
	}
	printf("\n2|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i*2);
	}
	printf("\n3|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 3);
	}
	printf("\n4|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 4);
	}
	printf("\n5|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 5);
	}
	printf("\n6|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 6);
	}
	printf("\n7|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 7);
	}
	printf("\n8|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 8);
	}
	printf("\n9|");
	for (i = 1; i <= 9; i++) {
		printf("%2d ", i * 9);
	}
}