#include<stdio.h>
main() 
{
	int num, i;
	
	printf("数を入れて: ");
	scanf("%d", &num);

	i = 0;

	while (i < num) {
		printf("*");
		i++ ; //i = i + 1でもok 繰り返すから＋１でいい
	}
}