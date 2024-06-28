#include<stdio.h>
main() {
	char s[30];
	int i;
	int k[30];

	printf("文字列を入力してください>");
	scanf("%s", s);

	for (i = 0; s[i] != '\0';i++) {

		//復号化キーの入力
		printf("s[%d]の復号化キー>",i);
		scanf("%d", &k[i]);

		//復号化キーを使って復号化
		s[i] = s[i] - k[i];

	}
	printf("複号化済み文字列>%s\n", s);
}