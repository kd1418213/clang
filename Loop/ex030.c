#include<stdio.h>
main()
{
	int num, add;

	printf("”‚ğ“ü‚ê‚Ä: ");
	scanf("%d", &num);

	add = 0;

	while (add <= 10) {
		printf("%d + %d = %d\n", num, add, num + add);
		add++;
	}
}