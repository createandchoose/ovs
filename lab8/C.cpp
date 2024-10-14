#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    printf("НОД(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
