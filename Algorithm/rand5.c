#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int a;
	srand(time(0));
	rand();

	for (a = 0; a < 100;a++) {
		if (a % 10 == 0) {
			printf("\n");
		}
		printf("%4d ", rand() % 300 + 1);
	}
}