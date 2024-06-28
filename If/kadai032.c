#include<stdio.h>
main()
{
	int num,rem;
	printf("整数？ ");
	scanf("%d", &num);
	//rem = num % 2;

	if (num % 2== 0) {
		printf("その数は「偶数」です\n");
	}
	else {
		printf("その数は「奇数」です\n");
	}
}