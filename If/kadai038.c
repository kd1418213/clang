#include<stdio.h>
main() {
	char moji;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji + 32);
	}
	else {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji - 32);
	}
}