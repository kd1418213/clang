#include<stdio.h>
#include<string.h>
struct day {
	int	nen;
	int	tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth; //���������\����
	char blood[5];
};
//�����l�́A{"aoyama",{1972,3,5},"A"}�݂����Ȋ����ŏ����Ɗi�[�ł���
main() {
	struct profile pdat[5] = { { "Aoyama",{1972,3,5},"A" },
							   { "Koyama",{1972,4,5},"A" },
							   { "Moyama",{1972,5,5},"A" },
							   { "Doyama",{1972,6,5},"A" },
							   { "Soyama",{1972,5,5},"A" } };
	struct profile* p = pdat;
	int i;
	for (i = 0; i < 5; i++,p++) {
		if (p->birth.tuki == 5) {
			printf("% s-- % d�N % d�� % d���� ���t�^ - % s�^\n",
				p->name, p->birth.nen, p->birth.tuki, p->birth.hi, p->blood);
		}
	}
}