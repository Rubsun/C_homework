#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Проверка на отрицательное число
    if (num < 0) {
        printf("Binary representation: -");
        num = -num;
    }
    
    int binary[32]; // массив для хранения двоичного числа
    int i = 0;
    
    // Перевод числа в двоичную систему
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    
    // Вывод двоичного числа в обратном порядке
    for (int j = i-1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}
