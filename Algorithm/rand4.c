#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int un, star;
	star = 0;

	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	
	printf("�����̉^����");

	while (star < un) {
		printf("��");
		star++;
	}
	printf(" �ł��B");
}