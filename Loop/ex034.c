#include<stdio.h>
main() {
	//�����^�ϐ�a�̐錾�ƂP�ւ̏�����
	int a;
	a = 1;
	//do~while�̌J��Ԃ�����
	do {
		//a=?�̕\��(?�̕����͕ϐ�a�̒l)
		printf("i = %d\n", a++); 
		//�ϐ�a�̃C���N�������g
		
		//�㔻�菈��(a���P�O�ȉ��̎��J��Ԃ�)
	} while (a <= 10);
}