#include<stdio.h>
main()
{
	char su1, su2;
	su1 = '5';
	su2 = '6';

	printf("%c x %c = %d \n", su1, su2, (su1 - 48) * (su2 - 48));
	/*Ğ‰î‚³‚ê‚½‚â‚è•û*/
	//printf("%c x %c = %d \n", su1, su2, (su1 - '0') * (su2 - '0'));
	/*'0'‚Æ48‚Í•\¦‚Ìd•û‚Ìˆá‚¢*/
}