#include<stdio.h>
main() {
	int i;
	i = 1;
	do {
		printf("%2d ", i++);
		if (i % 10 == 1) {
			printf("\n");
		}
	} while (i <= 20);
}