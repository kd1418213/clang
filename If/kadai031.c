#include<stdio.h>
main() {
	float x, y, ans;
	printf("２つの実数値?");
	scanf("%f%f", &x, &y);
	if (x < y) {
		printf("大きいほうは=%f", y);
	}
	else {
		printf("大きいほうは=%f", x);
	}
}