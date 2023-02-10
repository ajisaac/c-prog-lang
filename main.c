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

void replace_tabs_with_spaces() { // ex. 1-20
    char new[1000];
    for (int i = 0; i < 1000; i++)
        new[i] = 0;

    for (int c = 0, i = 0; (c = getchar()) != EOF;) {
        if (i == 1000) { // at end so should close the string
            new[999] = '\0';
            break;
        }

        if (c == '\t') {
            if (i >= 996) { // we have less than 4 chars left
                new[i] = '\0';
                break;
            }
            new[i++] = ' ';
            new[i++] = ' ';
            new[i++] = ' ';
            new[i++] = ' ';
            continue;
        }

        new[i++] = c;
    }

    printf("%s", new);
}

void range_of_types() {

    char c = 0;
    size_t cs = sizeof c;
    printf("char:\t\t%zu\n", cs);


    short int si = 0;
    size_t sis = sizeof si;
    printf("short int:\t%zu\n", sis);

    int i = 0;
    size_t is = sizeof i;
    printf("int\t\t\t%zu\n", is);

    long int li = 0;
    size_t lis = sizeof li;
    printf("long int\t%ld\n", lis);

    float f = 0.0f;
    size_t fs = sizeof f;
    printf("float\t\t%zu\n", fs);

    double d = 0.0f;
    size_t ds = sizeof d;
    printf("double\t\t%zu\n", ds);

    long double ld = 0.0f;
    size_t lds = sizeof ld;
    printf("long double\t%zu\n", lds);

}

int main() {
    range_of_types();
//    replace_tabs_with_spaces();
//    count_lines();
//    count_chars();
//    count();
//    copy();
//    fahrenheit();
}
