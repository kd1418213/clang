#include<stdio.h>
main() {
	float x, y, ans;
	printf("�Q�̎����l?");
	scanf("%f%f", &x, &y);
	if (x < y) {
		printf("�傫���ق���=%f", y);
	}
	else {
		printf("�傫���ق���=%f", x);
	}
}