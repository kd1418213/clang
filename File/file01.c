#include<stdio.h>
main() {
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "�q�m�L�� �_\n");
	fprintf(fp, "���̌� �|�̌�\n");
	fprintf(fp, "1 10 ���̌�\n");
	fclose(fp);
}