#include<stdio.h>
main() {
	int num;

	printf("整数を入れて: ");
	scanf("%d", &num);

	switch (num/10) {
	case 1:printf("10点台");
		break;
	case 2:printf("20点台");
		break;
	case 3:printf("30点台");
		break;
	case 4:printf("40点台");
		break;

	default:printf("エラー");
	}
}