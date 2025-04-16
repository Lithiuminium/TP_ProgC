#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int n;

    for (int i = 0; i < 5; i++) {
        n = nombres[i];
        printf("Représentation binaire de %d : ", n);
        
        for (int j = 31; j >= 0; j--) {
            int bit = (n >> j) & 1;
            printf("%d", bit);
            if (j % 4 == 0) printf(" ");
        }

        printf("\n");
    }

    return 0;
}
