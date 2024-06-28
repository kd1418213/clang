#include<stdio.h>
main()
{
	char su;
	su = '1';
	
	printf("su = %c \n数値に変換: %d \n",su, su - 48);
	/*紹介されたやり方*/
	//printf("su = %c \n数値に変換: %d \n", su, su - '0');
	/*'0'と48は表示の仕方の違い*/
}