#include<stdio.h>
main() {
	int num = 0;
	while (num != -1) {
		printf("文字コード(-1で入力終了)?");
		scanf("%d", &num);
		printf("%c\n", num);
	}
}