#include <stdio.h>

int main() {
    unsigned int d = 0x10080000;

    int bit_4_pos = 32 - 4;
    int bit_20_pos = 32 - 20;

    int bit_4 = (d >> bit_4_pos) & 1;
    int bit_20 = (d >> bit_20_pos) & 1;

    if (bit_4 == 1 && bit_20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
