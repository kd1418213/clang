#include<stdio.h>
main() {
	int num=0;
	while (num != -999) {
		printf("整数(-999で終了)?");
		scanf("%d", &num);
		printf("8進数=%o\t16進数=%X\n", num, num);
	}
}