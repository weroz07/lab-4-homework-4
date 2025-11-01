//1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    
    printf("Начальные значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("double d = %.12f\n", d);
    printf("\n");

    
    printf("Введите новый символ: ");
    scanf(" %c", &c);

    printf("Введите новое целое число: ");
    scanf("%d", &i);

    printf("Введите новое вещественное число: ");
    scanf("%f", &f);

    printf("Введите новое double число: ");
    scanf("%lf", &d);

    printf("\nНовые значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %f\n", d);
    printf("\n");

    
    int celaya_chast = (int)f;
    float drobnaya_chast = f - celaya_chast;
    printf("Задача 1а:\n");
    printf("Число: %f\n", f);
    printf("Целая часть: %d\n", celaya_chast);
    printf("Дробная часть: %f\n", drobnaya_chast);
    printf("\n");

    
    printf("Задача 1б:\n");
    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный код: %X\n", c);
    printf("\n");

    
    printf("Задача 1в:\n");
    printf("i = %d\n", i);
    printf("1/i = %f\n", 1.0 / i);

    return 0;
}




