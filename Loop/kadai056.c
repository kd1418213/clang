#include<stdio.h>
main() {
	char moji,c;
	printf("アルファベット小文字");
	scanf("%c", &moji);
	for (c =moji; c <= 'z'; c++) {
		printf("%c ", c);
	}
}