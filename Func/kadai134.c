#include<stdio.h>
main() {
	char* c;
	char word[256];
	printf("•¶š—ñ(ctrlz‚ÅI—¹)?");
	c = gets(word);
	while (c != NULL) {
		printf("%s", word);
		putchar('\n');
		printf("•¶š—ñ(ctrlz‚ÅI—¹)?");
		c = gets(word);
	}
}