#include<stdio.h>
main() {
	int i;
	i = 1;
	while (i <= 20) {
		printf("%2d ",i++);
		if (i % 10 == 1) {
			printf("\n");
		}
	} 
}