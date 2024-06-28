#include<stdio.h>
main() {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i, n;

	p_tbl = &tbl[0][1];

	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");

	for (n = 0; n < 3; n++) {
		//p_tbl = &tbl[n][1];
		printf(" %d ",*p_tbl);
		p_tbl += 3;
	}
}