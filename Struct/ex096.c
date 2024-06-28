#include<stdio.h>
//型（枠組み）の宣言
struct syohin_data {
	char name[20];
	int tanka;
};
//関数プロトタイプ宣言
void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data* p);

main() {
	int a = 10;
	struct syohin_data syohin = { "ケシゴム",50 };
	display1(a); //値渡し
	display2(syohin); //値渡し
	display3(&syohin); //アドレス（&）渡し
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

	//アドレスを受け取っているので
	//書き換えが可能
	strcpy(p->name, "値上げケシゴム");
	p->tanka = 100;
	
}