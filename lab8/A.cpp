#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    printf("НОД(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
