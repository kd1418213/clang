#include <stdio.h>

int main() {
    int start_code = 32; // �\���͈͂̊J�n�R�[�h
    int end_code = 126; // �\���͈͂̏I���R�[�h

    for (int code = start_code; code <= end_code; code++) {
        printf("%2X\t%c\t", code, (char)code);

        if (code % 10 == 1)
            printf("\n");
    }
}