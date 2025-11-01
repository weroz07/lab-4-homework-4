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

    
    printf("Íà÷àëüíûå çíà÷åíèÿ:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("double d = %.12f\n", d);
    printf("\n");

    
    printf("Ââåäèòå íîâûé ñèìâîë: ");
    scanf(" %c", &c);

    printf("Ââåäèòå íîâîå öåëîå ÷èñëî: ");
    scanf("%d", &i);

    printf("Ââåäèòå íîâîå âåùåñòâåííîå ÷èñëî: ");
    scanf("%f", &f);

    printf("Ââåäèòå íîâîå double ÷èñëî: ");
    scanf("%lf", &d);

    printf("\nÍîâûå çíà÷åíèÿ:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %f\n", d);
    printf("\n");

    
    int celaya_chast = (int)f;
    float drobnaya_chast = f - celaya_chast;
    printf("Çàäà÷à 1à:\n");
    printf("×èñëî: %f\n", f);
    printf("Öåëàÿ ÷àñòü: %d\n", celaya_chast);
    printf("Äðîáíàÿ ÷àñòü: %f\n", drobnaya_chast);
    printf("\n");

    
    printf("Çàäà÷à 1á:\n");
    printf("Ñèìâîë: %c\n", c);
    printf("Äåñÿòè÷íûé êîä: %d\n", c);
    printf("Øåñòíàäöàòåðè÷íûé êîä: %X\n", c);
    printf("\n");

    
    printf("Çàäà÷à 1â:\n");
    printf("i = %d\n", i);
    printf("1/i = %f\n", 1.0 / i);

    return 0;
}




