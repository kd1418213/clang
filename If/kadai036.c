#include<stdio.h>
main() {
	int x, y;
	printf("�����P?");
	scanf("%d", &x);
	printf("�����Q?");
	scanf("%d", &y);
	if (x < y) {
		printf("%d�̕���%d�傫��", y, y - x);
	}
	else {
		if (y < x) {
			printf("%d�̕���%d�傫��", x, x - y);
		}
		else {
			printf("%d��%d�͓�����",x,y);
		}
	}
}