#include<stdio.h>
void result(int x, int y, int* gokei, float* heikin);
main() {
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—Í: ");
	scanf("%d%d", &a, &b);
	result(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f",c,d);
}
void result(int x, int y, int* gokei, float* heikin) {
	*gokei = x + y;
	*heikin = (float)*gokei / 2.0;
	return;
}