#include<stdio.h>
main() {
	int i;
	i = 20;
	while (i >= 1) {
		printf("%2d ", i--);
		if (i == 10) {
			printf("\n");
		}
	}
}