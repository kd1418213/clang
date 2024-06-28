#include<stdio.h>
char program(char x);
main() {
	int c;
	char dumy[256];
	printf("•¶š(ctrlz‚ÅI—¹)");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		printf("•¶š(ctrlz‚ÅI—¹)");
		c = getchar();
	}
}