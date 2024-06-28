#include<stdio.h>
main() {
	int x, y;
	char en;
	printf("®”1?");
	scanf("%d", &x);
	printf("®”2?");
	scanf("%d", &y);

	getchar();

	printf("‰‰Zq?");
	scanf("%c", &en);
	switch (en) {
	case '+':printf("%d + %d = %d", x, y, x + y);
		break;
	case '-':printf("%d - %d = %d", x, y, x - y);
		break;
	case '*':printf("%d * %d = %d", x, y, x * y);
		break;
	case '/':printf("%d / %d = %d", x, y, x / y);
		break;
	case '%':printf("%d % %d = %d", x, y, x % y);
		break;
	default:printf("ƒGƒ‰[");
	}
}