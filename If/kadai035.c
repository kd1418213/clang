#include<stdio.h>
main() {
	int num;
	printf("�����H");
	scanf("%d", &num);
	if (num < 0) {
		printf("���͒l�̓}�C�i�X�ł�");
	}
	else {
		if(num>0){
			printf("���͒l�̓v���X�ł�");
		}
		else {
			printf("�l��0�ł�");
		}
	}
}