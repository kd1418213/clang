#include<stdio.h>
main() {
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* p;
	int i;
	for (i = 0; i < 3; i++) {
		p = p_ride[i];
		while (*p) {
			printf("%c", *p++);
			//putchar(*p++);
		}
		printf("\n");
		//putchar('\n');
	}
}