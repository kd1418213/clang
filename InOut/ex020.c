#include<stdio.h>
main()
{
	char moji;
	printf("小文字を入力:");
	scanf("%c", &moji);
	
	printf("大文字に変換して %c \n", moji - 32);
	//１６進数ならAは0x41 aは0x61
}