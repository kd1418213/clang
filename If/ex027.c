#include<stdio.h>
main()
{
	char moji;
	
	printf("���������: ");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {
		printf("�ϊ������%c", moji + 32);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("�ϊ������%c", moji - 32);
		}
		else {
			printf("�G���[");
		}
	}
}