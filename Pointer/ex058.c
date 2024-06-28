#include <stdio.h>
main() {
	int a[3], * p;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p %4d\n", *p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p+1 %4d\n", *p+1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *(p+1) %4d\n", *(p+1));
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p+=1 %4d\n", *p+=1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p++ %4d\n", *p++);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" (*p)++ %4d\n", (*p)++);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *++p %4d\n", *++p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" ++*p %4d\n", ++*p);
}