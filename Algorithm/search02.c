#include<stdio.h>
main() {
	int i, s, d[10+1] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("探査値を入力:");
	scanf("%d", &s);

	d[10] = s;
	
	for (i = 0; s != d[i]; i++) {
	}
	if (i >= 10) {
		printf("見つからなかった");
	}
	else {
		printf("d[%d]で見つかった", i);
	}
}