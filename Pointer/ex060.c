#include<stdio.h>
main() {
	char data[15] = "Language";
	char* p_data, ch;
	int i;

	p_data = data;

	printf("data[] = %s\n", p_data);

	printf("���������́H");
	scanf("%c", &ch);

	printf("�������ʂ́A");

	for (i = 0; *(p_data + i) != '\0';i++) {
		if (ch == *(p_data + i)) {
			printf("%d ",i+1);
		}
	}
	printf("�����ڂł�");
}