#include<stdio.h>
main() {
	int num, num1;
	while (1) {
		printf("整数１（-999で終了）?");
		scanf("%d", &num);
		if (num == 0)continue;
		if (num == -999)break;
		printf("整数2（-999で終了）?");
		scanf("%d", &num1);
		if (num1 == 0)continue;
		if (num1 == -999)break;
		printf("%d / %d = %d あまり %d\n", num, num1, num / num1, num % num1);
	}
}