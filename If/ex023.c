#include<stdio.h>
main()
{
	int hour, min, sec, sec1;
	printf("�b������́F");
	scanf("%d", &sec);
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec1 = (sec % 3600) % 60;
	if (sec >= 5000) {
		printf("error\n");
	}
	else {
		printf("%d����%d��%d�b�ł�\n", hour, min, sec1);
	}
}