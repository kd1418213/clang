#include<stdio.h>
main() 
{
	int num, i;
	
	printf("��������: ");
	scanf("%d", &num);

	i = 0;

	while (i < num) {
		printf("*");
		i++ ; //i = i + 1�ł�ok �J��Ԃ�����{�P�ł���
	}
}