#include<stdio.h>
char program(char x);
main() {
	int c;
	char dumy[256];
	printf("����(ctrlz�ŏI��)");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		printf("����(ctrlz�ŏI��)");
		c = getchar();
	}
}