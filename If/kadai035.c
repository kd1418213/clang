#include<stdio.h>
main() {
	int num;
	printf("整数？");
	scanf("%d", &num);
	if (num < 0) {
		printf("入力値はマイナスです");
	}
	else {
		if(num>0){
			printf("入力値はプラスです");
		}
		else {
			printf("値は0です");
		}
	}
}