#include<stdio.h>
int gokei(int d1, int d2, int d3);
float heikin(int d1, int d2, int d3);
main() {
	int d1, d2, d3, g;
	float h;
	printf("整数を３つ入力: ");
	scanf("%d%d%d", &d1, &d2, &d3);
	g = gokei(d1, d2, d3);
	h = heikin(d1, d2, d3);
	printf("合計は%d、平均は%.2f\n", g, h);
}

int gokei(int d1, int d2, int d3) {
	int g2;
	g2 = d1 + d2 + d3;
	return g2;

	//return d1 + d2 + d3; //これでも動く
}
float heikin(int d1, int d2, int d3) {
	float h2;
	h2 = (d1 + d2 + d3) / 3.0;
	return h2;
}