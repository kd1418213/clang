#include<stdio.h>
main() {
	char moji;

	printf("��������� ");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z' || moji >= 'a' && moji <= 'z') {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if (moji >= '0' && moji <= '9') {
			printf("�����ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}