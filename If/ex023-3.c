#include<stdio.h>
main()
{
	int en, num1, num2;
	printf("‰‰Zq‚ğ“ü—Í: ");
	scanf("%d", &en);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í: ");
	scanf("%d%d", &num1, &num2);

	if (en == 1) {
		printf("%d", num1 + num2);
	}
	else {
		if (en == 2) {
			printf("%d", num1 - num2);
		}
		else {
			if (en == 3) {
				printf("%d", num1 * num2);
			}
			else {
				printf("%d", num1 / num2);
			}
		}
	}
}