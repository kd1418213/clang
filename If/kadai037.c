#include<stdio.h>
main() {
	int num;
	printf("0����100�܂ł̐�����?");
	scanf("%d", &num);
	if (num >= 90 && num <= 100) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�\n");
	}
    else if (num >= 80 && num <= 89) {
        printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");
    }
    else if (num >= 50 && num <= 79) {
        printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
    }
    else if (num >= 30 && num <= 49) {
        printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
    }
    else {
        printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
    }
}