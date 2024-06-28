#include<stdio.h>
void mojiretsu(char* s1, char* s2);
main() {
	char str1[256], str2[256];
	printf("”z—ñ a: ");
	gets(str1);
	printf("”z—ñ b: ");
	gets(str2);
	mojiretsu(str1, str2);
	printf("”z—ñ a: %s", str1);
}
void mojiretsu(char* s1, char* s2) {
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}