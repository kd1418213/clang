#include<stdio.h>
main() {
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i;

	printf("�z��a�Ɣz��b�̉��Z���ʂ�z��c�Ɋi�[\n");
	printf("�z��a= ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z��b= ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n�z��c= ");
	for (i = 0; i < 10; i++) {
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
}