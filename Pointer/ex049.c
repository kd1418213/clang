#include<stdio.h>
main() {
	int a = 100, b; /*�ϐ��̐錾*/
	int* p_a; /*�|�C���^�̐錾*/
	p_a = &a; /*�A�h���X�̃Z�b�g*/
	b = *p_a;
	printf("a = %d b = %d *p_a = %d\n", a, b, *p_a);
}