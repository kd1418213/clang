#include<stdio.h>
main() {
	int a, b,c;
	//float c;

	printf("����? ");
	scanf("%d", &a);

	for (a, b = 0,c=0; a != -999; c++) {
		b += a;
		printf("����? ");
		scanf("%d", &a);
	}
	printf("���v= %d\t����= %.2f", b, (float)b / c);
}