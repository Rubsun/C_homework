#include <stdio.h>

int main() {
    int month, year, days;

    printf("Введите месяц (1-12): ");
    scanf("%d", &month);

    printf("Введите год: ");
    scanf("%d", &year);

    // проверяем количество дней в месяце
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    // выводим результат
    printf("Количество дней в месяце: %d\n", days);

    return 0;
}