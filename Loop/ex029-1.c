#include<stdio.h>
main()
{
	int num;

	printf("”‚ð“ü‚ê‚Ä: ");
	scanf("%d", &num);

	while (num > 0) {
		printf("*");
		num--; //i = i - 1‚Å‚àok ŒJ‚è•Ô‚·‚©‚ç-‚P‚Å‚¢‚¢
	}
}