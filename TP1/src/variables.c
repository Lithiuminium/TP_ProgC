#include <stdio.h>

int main() {
    signed char sc = -100;
    unsigned char uc = 200;

    signed short ss = -30000;
    unsigned short us = 60000;

    signed int si = -100000;
    unsigned int ui = 3000000000U;

    signed long int sli = -2000000000L;
    unsigned long int uli = 4000000000UL;

    signed long long int slli = -5000000000LL;
    unsigned long long int ulli = 10000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.61803398875L;

    printf("signed char            : %d\n", sc);
    printf("unsigned char          : %u\n", uc);

    printf("signed short           : %d\n", ss);
    printf("unsigned short         : %u\n", us);

    printf("signed int             : %d\n", si);
    printf("unsigned int           : %u\n", ui);

    printf("signed long int        : %ld\n", sli);
    printf("unsigned long int      : %lu\n", uli);

    printf("signed long long int   : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float                  : %.2f\n", f);
    printf("double                 : %.9f\n", d);
    printf("long double            : %.11Lf\n", ld);

    return 0;
}
