#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int kazu;

	srand(time(0));
	rand(); //���������邱�Ƃł����Ɨ����Ȃ�
	kazu = rand();
	printf("��������������%d�ł�\n", kazu);
}