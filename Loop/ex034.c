#include<stdio.h>
main() {
	//整数型変数aの宣言と１への初期化
	int a;
	a = 1;
	//do~whileの繰り返し処理
	do {
		//a=?の表示(?の部分は変数aの値)
		printf("i = %d\n", a++); 
		//変数aのインクリメント
		
		//後判定処理(aが１０以下の時繰り返し)
	} while (a <= 10);
}