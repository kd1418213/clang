#include<stdio.h>
main() {
	char en;
	int i;
	printf("10�i���̐���?");
	scanf("%d", &i);

	getchar();
	printf("�A���t�@�x�b�g(o or h or d)?");
	scanf("%c", &en);
	switch (en) {
	case'O':
	case'o':
		printf("%o", i);
		break;
	case'H':
	case'h':
		printf("%x", i);
		break;
	case'D':
	case'd':
		printf("%d", i);
	default:printf("error");
	}
}