#include<stdio.h>
main() {
	int x, y;
	printf("整数１?");
	scanf("%d", &x);
	printf("整数２?");
	scanf("%d", &y);
	if (x < y) {
		printf("%dの方が%d大きい", y, y - x);
	}
	else {
		if (y < x) {
			printf("%dの方が%d大きい", x, x - y);
		}
		else {
			printf("%dと%dは等しい",x,y);
		}
	}
}