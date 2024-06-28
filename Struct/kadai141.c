#include<stdio.h>
struct kobe {
	char course[20];
	char class[20];
	int grade;
};
main() {
	struct kobe denshi = { "ゲームソフトIコース","C言語",8 };
	printf("コース名: %s\n", denshi.course);
	printf("教科名: %s\n", denshi.class);
	printf("単位: %d", denshi.grade);
}