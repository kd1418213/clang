#include<stdio.h>
main() {
	int num;

	printf("����������: ");
	scanf("%d", &num);

	switch (num/10) {
	case 1:printf("10�_��");
		break;
	case 2:printf("20�_��");
		break;
	case 3:printf("30�_��");
		break;
	case 4:printf("40�_��");
		break;

	default:printf("�G���[");
	}
}