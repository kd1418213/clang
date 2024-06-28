#include<stdio.h>
main() {
	char i;
	printf("アルファベット?");
	scanf("%c", &i);
	switch (i) {
	case'A':
	case'a':
		printf("America\nAustralia");
		break;
	case'E':
	case'e':
		printf("England");
		break;
	case'F': 
	case'f':
		printf("France");
		break;
	case'J': 
	case'j':printf("Japan");
		break;
	default:printf("エラー");
	}
}