#include <stdio.h>

int abs_val(int x) {
    if (x >= 0) return x;
    else return -x;
}

int main() {
    int num = 5;
    printf("Абсолютное значение %d = %d\n", num, abs_val(num));
    return 0;
}
