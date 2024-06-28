#include<stdio.h>
main() {
	int i;
	for (i = 1; i < 61; i++) {
		printf("%2d ",i);
		if (i == 20||i==40||i==60) {
			printf("\n");
		}
	}
}