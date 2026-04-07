#include <stdio.h>
int main() {
    int i = 1, s = 0;
    do {
        if (i % 2 != 0) s += i;
        i++;
    } while (i <= 100);
    printf("Soma: %d\n", s);
    return 0;
}
