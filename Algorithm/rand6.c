#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int a, b;

	srand(time(0));
	rand();

	printf("何を出しますか？");
	printf("(1:グー 2:チョキ 3:パー)> ");
	scanf("%d", &a);

	b = rand() % 3;

	switch (a) {
	case 1:printf("\nプレイヤーはグーです。\n");
		break;
	case 2:printf("\nプレイヤーはパーです。\n");
		break;
	case 3:printf("\nプレイヤーはチョキです。\n");
		break;
	}

	switch (b) {
	case 0:printf("コンピュータはグーです。\n");
		break;
	case 1:printf("コンピュータはパーです。\n");
		break;
	case 2:printf("コンピュータはチョキです。\n");
		break;
	}

	switch (((a - 1) - b + 3) % 3) {
	case 0:printf("\nあいこです。\n");
		break;
	case 1:printf("\nプレイヤーの勝ちです。\n");
		break;
	case 2:printf("\コンピュータの勝ちです。\n");
		break;
	}


}