#include<stdio.h>
main()
{
	int en, num1, num2;
	printf("���Z�q�����: ");
	scanf("%d", &en);
	printf("�Q�̐��������: ");
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