#include<stdio.h>
main()
{
	char su1, su2;
	su1 = '5';
	su2 = '6';

	printf("%c x %c = %d \n", su1, su2, (su1 - 48) * (su2 - 48));
	/*�Љ�ꂽ����*/
	//printf("%c x %c = %d \n", su1, su2, (su1 - '0') * (su2 - '0'));
	/*'0'��48�͕\���̎d���̈Ⴂ*/
}