#include<stdio.h>
int main() {
    int gokei = 0, num = 0, heikin = -1;
    while (num != -999) {
        gokei += num;
        heikin++;
        printf("����(-999�ŏI��)?");
        scanf("%d", &num);
    }
    printf("���v=%d\n", gokei);
    printf("����=%.2f\n", (float)gokei / (float)heikin);
}