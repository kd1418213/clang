#include <stdio.h>

int main() {
    int start_code = 32; // 表示範囲の開始コード
    int end_code = 126; // 表示範囲の終了コード

    for (int code = start_code; code <= end_code; code++) {
        printf("%2X\t%c\t", code, (char)code);

        if (code % 10 == 1)
            printf("\n");
    }
}