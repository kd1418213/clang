#include<stdio.h>
main() {
	int c;
	char dumy[256];

	c = getchar(); //����

	while (c != EOF) { //Ctrl + Z�ŏI��
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar(); //����
	}
}