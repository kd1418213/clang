#include<stdio.h>
main() {
	double x, y;
	printf("‚Q‚Â‚ÌÀ”’l? ");
	scanf("%lf%lf", &x, &y);
	printf("%.1f‚Æ%.1f‚Ìl‘¥‰‰Z\n",x,y);
	printf("˜a=%f ·=%f Ï=%f ¤=%f", x + y, x - y, x * y, x / y);
}