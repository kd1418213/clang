#include<stdio.h>
main() {
	int max_score, score = 0;
	char ch;
	char max_name[20], name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_ ���O:%s �X�R�A:%d\n", max_name, max_score);

	printf("�v���C���[�̖��O��:");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d(Enter�ŃX�R�A+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		//�t�@�C��score.txt�ւ̏�������
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}