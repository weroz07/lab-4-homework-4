#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;

    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    int last = n % 10;
    int first = n / 100;
    int middle = (n / 10) % 10;
    int sum = first + middle + last;
    int reverse = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d\n", last);
    printf("Первая цифра: %d\n", first);
    printf("Сумма цифр: %d\n", sum);
    printf("Число наоборот: %d\n", reverse);

    return 0;
}