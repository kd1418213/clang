#include<stdio.h>
main()
{
	int num;

	printf("��������: ");
	scanf("%d", &num);

	while (num > 0) {
		printf("*");
		num--; //i = i - 1�ł�ok �J��Ԃ�����-�P�ł���
	}
}