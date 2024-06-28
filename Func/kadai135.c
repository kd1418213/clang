#include<stdio.h>
void strrvs(char* s1, char* s2);
main() {
	char word[256], word2[256];
	printf("•¶Žš—ñ(ctrlz‚ÅI—¹)?");
	while (gets(word) != NULL) {
		strrvs(word, word2);
		printf("%s\n", word2);
		printf("•¶Žš—ñ(ctrlz‚ÅI—¹)?");
	}
}
void strrvs(char* s1, char* s2) {
	int i, j;
	for (i = 0, j = 0; *(s1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}