#include<stdio.h>
main()
{
	char moji;
	printf("���������: ");
	scanf("%c", &moji);

	if (moji >= 'A') {
		if (moji <= 'Z') {
			printf("�啶���ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
	else {
		printf("���̑��̕����ł�");
	}
	//if ('A' >= moji && moji <= 'Z') {
	// printf("�啶���ł�");
	// }
	// else {
	// printf("���̑��̕����ł�");
	// }
}