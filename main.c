#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void fahrenheit() {
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}

void copy() {
    int c;
    printf("%d\n", EOF);
    while ((c = getchar()) != EOF)
        putchar(c);
}

void count() {
    long long nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%lld\n", nc);
}

void count_chars() {
    long c;
    for (c = 0; getchar() != '\n'; ++c);
    printf("%ld\n", c);
}

void count_lines() {
    long d = 0;
    for (int c = 0; (c = getchar()) != EOF;) {
        if (c == '\n') d++;
    }
    printf("%ld\n", d);
}

int main() {
    count_lines();
//    count_chars();
//    count();
//    copy();
//    fahrenheit();
}
