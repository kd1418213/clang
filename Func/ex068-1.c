#include<stdio.h>
main() {
	int c;
	char dumy[256];
	char data, data2; //���͗p

	c = scanf("%c%c", &data, &data2); //����

	while (c != EOF) { //Ctrl + Z�ŏI��
		printf("%d", c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2); //����
	}
}