#include<stdio.h>
main() {
	int a[10] = { 10,20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i;
	int gokei;

	gokei = 0;

	printf("配列a= ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		gokei += a[i];
	}
	printf("\n合計= %d\t平均= %d", gokei, gokei / 10);

	gokei = 0;

	printf("\n配列b= ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		gokei += b[i];
	}
	printf("\n合計= %d\t平均= %d", gokei, gokei / 10);
}