#include<stdio.h>
struct kobe {
	char course[20];
	char class[20];
	int grade;
};
main() {
	struct kobe denshi = { "�Q�[���\�t�gI�R�[�X","C����",8 };
	printf("�R�[�X��: %s\n", denshi.course);
	printf("���Ȗ�: %s\n", denshi.class);
	printf("�P��: %d", denshi.grade);
}