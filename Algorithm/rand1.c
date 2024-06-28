#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int kazu;

	srand(time(0));
	rand(); //©‚±‚ê“ü‚ê‚é‚±‚Æ‚Å‚¿‚á‚ñ‚Æ—”‚È‚é
	kazu = rand();
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);
}