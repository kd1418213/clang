#include<stdio.h>
main() {
	int x, y;
	printf("®”‚P?");
	scanf("%d", &x);
	printf("®”‚Q?");
	scanf("%d", &y);
	if (x < y) {
		printf("%d‚Ì•û‚ª%d‘å‚«‚¢", y, y - x);
	}
	else {
		if (y < x) {
			printf("%d‚Ì•û‚ª%d‘å‚«‚¢", x, x - y);
		}
		else {
			printf("%d‚Æ%d‚Í“™‚µ‚¢",x,y);
		}
	}
}