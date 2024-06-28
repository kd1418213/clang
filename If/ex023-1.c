#include<stdio.h>
main()
{
	int hour, min, sec, sec1;
	printf("秒数を入力：");
	scanf("%d", &sec);
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec1 = (sec % 3600) % 60;
	if (sec < 0) {
		printf("マイナスはerrorです\n");
	}
	else {
		if (sec >= 5000) {
			printf("error\n");
		}
		else {
			printf("%d時間%d分%d秒です\n", hour, min, sec1);
		}
	}
	
}