#include<stdio.h>
main() {
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, * w;

	printf("���s�O: a = %d \t b = %d\n", *p_a, *p_b);

	w = p_a;
	p_a = p_b;
	p_b = w;

	printf("���s��: a = %d \t b = %d\n", *p_a, *p_b);


}