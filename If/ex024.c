#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í: ");
	scanf("%c", &moji);

	if (moji >= 'A') {
		if (moji <= 'Z') {
			printf("‘å•¶Žš‚Å‚·");
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
	//if ('A' >= moji && moji <= 'Z') {
	// printf("‘å•¶Žš‚Å‚·");
	// }
	// else {
	// printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	// }
}