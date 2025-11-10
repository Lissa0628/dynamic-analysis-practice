#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i <= 5; i++) {  // Ошибка: должно быть i < 5
        arr[i] = i * 10;
    }
    return 0;
}
