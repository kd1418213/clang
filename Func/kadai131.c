#include<stdio.h>
char program(char x);
main() {
	int c;
	char dumy[256];
	printf("文字(ctrlzで終了)");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		printf("文字(ctrlzで終了)");
		c = getchar();
	}
}