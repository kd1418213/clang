#include<stdio.h>
main() {
	char* c;
	char word[256];
	printf("������(ctrlz�ŏI��)?");
	c = gets(word);
	while (c != NULL) {
		printf("%s", word);
		putchar('\n');
		printf("������(ctrlz�ŏI��)?");
		c = gets(word);
	}
}