#include<stdio.h>
main() {
	int num;
	printf("0から100までの整数は?");
	scanf("%d", &num);
	if (num >= 90 && num <= 100) {
		printf("その数値の判定結果は「５」です\n");
	}
    else if (num >= 80 && num <= 89) {
        printf("その数値の判定結果は「4」です\n");
    }
    else if (num >= 50 && num <= 79) {
        printf("その数値の判定結果は「3」です\n");
    }
    else if (num >= 30 && num <= 49) {
        printf("その数値の判定結果は「2」です\n");
    }
    else {
        printf("その数値の判定結果は「1」です\n");
    }
}