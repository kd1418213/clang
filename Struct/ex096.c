#include<stdio.h>
//�^�i�g�g�݁j�̐錾
struct syohin_data {
	char name[20];
	int tanka;
};
//�֐��v���g�^�C�v�錾
void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data* p);

main() {
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };
	display1(a); //�l�n��
	display2(syohin); //�l�n��
	display3(&syohin); //�A�h���X�i&�j�n��
	display2(syohin);
}
void display1(int a) {
	printf("a = %d\n", a);
}
void display2(struct syohin_data syohin) {
	printf("syohin.name = %s syohin.tanka = %d\n",
		syohin.name, syohin.tanka);
}
void display3(struct syohin_data* p) {
	
	printf("syohin.name = %s syohin.tanka = %d\n", p->name, p->tanka);

	//�A�h���X���󂯎���Ă���̂�
	//�����������\
	strcpy(p->name, "�l�グ�P�V�S��");
	p->tanka = 100;
	
}