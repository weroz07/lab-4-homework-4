#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;

    printf("Ââåäèòå òðåõçíà÷íîå ÷èñëî: ");
    scanf("%d", &n);

    int last = n % 10;
    int first = n / 100;
    int middle = (n / 10) % 10;
    int sum = first + middle + last;
    int reverse = last * 100 + middle * 10 + first;

    printf("Ïîñëåäíÿÿ öèôðà: %d\n", last);
    printf("Ïåðâàÿ öèôðà: %d\n", first);
    printf("Ñóììà öèôð: %d\n", sum);
    printf("×èñëî íàîáîðîò: %d\n", reverse);

    return 0;
}
