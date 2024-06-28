#include<stdio.h>
main() {
	int num, gokei, i;
	float heikin;
	num = 0;
	gokei = 0;
	i = 0;
	while (1) {
		printf("整数（-999で終了）? ");
		scanf("%d", &num);
		if (num == -999)break;
		gokei += num;
		i++;
	}
	heikin = (float)gokei / (float)i;
	printf("合計 = %d\n", gokei);
	printf("平均 = %.3f", heikin);
}