#include<stdio.h>
main() {
	char moji;
	printf("�A���t�@�x�b�g?");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("���̕����͑啶���ł�");
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("���̕����͏������ł�");
		}
		else {
			printf("ERROR");
		}
	}
}