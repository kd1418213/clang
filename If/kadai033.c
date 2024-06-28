#include<stdio.h>
main() {
	char moji;
	printf("アルファベット?");
	scanf("%c", &moji);
	if (moji>='A' && moji <= 'Z') {
		printf("その文字は大文字です");
	}
	else {
		printf("その文字は小文字です");
	}
}