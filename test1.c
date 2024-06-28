#include<stdio.h>
#include<string.h>

int main() {
	char str1[] = "ROM";
	char str3[] = "PROGORAM";
	char buf[100];
	strcpy(buf, str1);
	strcat(buf, strchr(str3, str1[1]));
	printf("%s\n", buf);
}