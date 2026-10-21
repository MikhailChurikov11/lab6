#include <stdio.h>
#include <math.h>

int main() {
    int year;

    printf("Введите год для проверки: ");

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

        printf("Год %d високосный\n", year);
    }
    else {
        printf("Год %d не високосный\n", year);
    }

    return 0;
}

int zadanie2() {

double x, result;

printf("Введите значение x: ");
scanf("%lf", &x);

/*
   Контрольные примеры:
   1) x = 2  -> F(x) = -(2^3) + 9 = -8 + 9 = 1.0
   2) x = 14 -> F(x) = -3 / (14 + 1) = -3 / 15 = -0.2
*/

result = (x <= 13) ? (-pow(x, 3) + 9) : (-3.0 / (x + 1));

printf("Значение функции F(x) при x = %.2lf равно: %.4lf\n", x, result);

return 0;
}