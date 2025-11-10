#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {  // Исправлено
        arr[i] = i * 10;
    }
    return 0;
}
