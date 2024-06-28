#include<stdio.h>
main()
{
	int a, b, c,sum;
	printf("整数を3個入力:");
	scanf("%d%d%d",&a,&b,&c);
	sum = a + b + c;
	printf("合計 = %d \t 平均=%.2f \n", sum, sum / 3.0);
	//\tはタブ、位置合わせ
}