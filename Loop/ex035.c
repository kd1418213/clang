#include<stdio.h>
main() {
	int num, a;
	a = 0;
	do {
		printf("�������� ");
		scanf("%d", &num);
		if (num == -999)break;
		a += num;
	} while (1);
	printf("���v��%d", a);
}