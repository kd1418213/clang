#include<stdio.h>
main()
{
	int num, add;

	printf("数を入れて: ");
	scanf("%d", &num);

	add = 0;

	while (add <= 10) {
		printf("%d + %d = %d\n", num, add, num + add);
		add++;
	}
}