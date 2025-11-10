#include <stdio.h>

int abs_val(int x) {
    if (x >= 0) return x;
    else return -x;
}

int main() {
    printf("abs(5) = %d\n", abs_val(5));
    printf("abs(-7) = %d\n", abs_val(-7));
    return 0;
}
