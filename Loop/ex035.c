#include<stdio.h>
main() {
	int num, a;
	a = 0;
	do {
		printf("数を入れて ");
		scanf("%d", &num);
		if (num == -999)break;
		a += num;
	} while (1);
	printf("合計は%d", a);
}