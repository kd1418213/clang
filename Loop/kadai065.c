#include<stdio.h>
main() {
	int i = 0, j = -1, gokei = 0;
	do {
		j++;
		gokei += i;
		printf("����(�|999�ŏI��)?");
		scanf("%d", &i);
	} while (i != -999);
	printf("���v=%d\n", gokei);
	printf("����=%f", (float)gokei / (float)j);

}