#include<stdio.h>
void result(int d, int* max, int* min);
main() {
	int num[3000];
	int i = 0;
	int x, y;
	printf("®”(CtrlZ‚ÅI—¹)?");
	while (scanf("%d", &num[i]) != EOF) {
		i++;
		printf("®”(CtrlZ‚ÅI—¹)?");
	}
	int z, j, w;
	for (z = 0; z < 2; z++) {
		for (j = z + 1; j < 3; j++) {
			if (num[z] > num[j]) {
				w = num[z];
				num[z] = num[j];
				num[j] = w;
			}
		}
	}
	result(i, &x, &y);
	printf("max = %d", num[x]);
	printf("min = %d", num[y]);
}
void result(int d, int* max, int* min) {
	d = d - 1;
	*max = d;
	*min = 0;
	return;
}