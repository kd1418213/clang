#include<stdio.h>
main() {
	int num, num1;
	while (1) {
		printf("�����P�i-999�ŏI���j?");
		scanf("%d", &num);
		if (num == 0)continue;
		if (num == -999)break;
		printf("����2�i-999�ŏI���j?");
		scanf("%d", &num1);
		if (num1 == 0)continue;
		if (num1 == -999)break;
		printf("%d / %d = %d ���܂� %d\n", num, num1, num / num1, num % num1);
	}
}