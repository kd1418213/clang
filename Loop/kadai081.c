#include<stdio.h>
main() {
	int num, gokei, i;
	float heikin;
	num = 0;
	gokei = 0;
	i = 0;
	while (1) {
		printf("�����i-999�ŏI���j? ");
		scanf("%d", &num);
		if (num == -999)break;
		gokei += num;
		i++;
	}
	heikin = (float)gokei / (float)i;
	printf("���v = %d\n", gokei);
	printf("���� = %.3f", heikin);
}