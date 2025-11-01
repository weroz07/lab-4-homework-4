#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 11;
    int b = 3;

    // Без преобразования
    int x = a / b;
    float y = a / b;
    double z = a / b;

    printf("Без преобразования:\n");
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
    printf("\n");

    // С преобразованием
    printf("С преобразованием:\n");
    printf("(float)a/b = %f\n", (float)a / b);
    printf("a/(float)b = %f\n", a / (float)b);
    printf("(float)(a/b) = %f\n", (float)(a / b));

    return 0;
}