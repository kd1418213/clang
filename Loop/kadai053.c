#include<stdio.h>
main() {
	int i, j;
	printf("®”?");
	scanf("%d", &i);
	for (j=i; i <= j + 10; i++) {
		printf("%d ", i);
	}
}