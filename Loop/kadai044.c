#include<stdio.h>
main() {
	int num=0;
	while (num != -999) {
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		printf("8�i��=%o\t16�i��=%X\n", num, num);
	}
}