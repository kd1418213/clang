#include<stdio.h>
main() {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i, n;

	p_tbl = tbl[0];

	printf("2次元配列tblの内容\n");
	
	/*for (i = 0; i < 3; i++) {
		for (n = 0; n < 3; n++) {
			printf(" %d ", *p_tbl++);
		}
		printf("\n");
	}*/
	for (n = 0; n < 9; n++) {
		if (n % 3 == 0) {
			printf("\n");
		}
		printf(" %d ", *p_tbl++);
	}
}