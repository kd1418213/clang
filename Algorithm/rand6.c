#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int a, b;

	srand(time(0));
	rand();

	printf("�����o���܂����H");
	printf("(1:�O�[ 2:�`���L 3:�p�[)> ");
	scanf("%d", &a);

	b = rand() % 3;

	switch (a) {
	case 1:printf("\n�v���C���[�̓O�[�ł��B\n");
		break;
	case 2:printf("\n�v���C���[�̓p�[�ł��B\n");
		break;
	case 3:printf("\n�v���C���[�̓`���L�ł��B\n");
		break;
	}

	switch (b) {
	case 0:printf("�R���s���[�^�̓O�[�ł��B\n");
		break;
	case 1:printf("�R���s���[�^�̓p�[�ł��B\n");
		break;
	case 2:printf("�R���s���[�^�̓`���L�ł��B\n");
		break;
	}

	switch (((a - 1) - b + 3) % 3) {
	case 0:printf("\n�������ł��B\n");
		break;
	case 1:printf("\n�v���C���[�̏����ł��B\n");
		break;
	case 2:printf("\�R���s���[�^�̏����ł��B\n");
		break;
	}


}