#include<stdio.h>
main() {
	char moji;
	printf("1��������?");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("�ϊ����ʂ�%c", moji + 32);
	}
	else {
		printf("�ϊ����ʂ�%c", moji - 32);
	}
}