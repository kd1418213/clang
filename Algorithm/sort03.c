#include<stdio.h>
main() {
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) { break; } {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1]= w;
			}
		}
	}
	for (j = 0; j < 5; j++) {
		printf("%d ", d[j]);
	}
}