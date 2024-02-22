#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numbers[9], max_index, min_index;
    int max_value = INT_MIN;
    int min_value = INT_MAX;

    system("chcp 1251 & cls");

    printf(" --------------------------------------------------------------------------------");
    printf("\n|Застосунок призначений для заміни місцями найбільшого елемента вхідного масива  |");
    printf("\n|з найменшим елементом вхідного масива.                                          |");
    printf("\n|                  Розробник застосунку: Гребенюк Денис Олегович                 |");
    printf("\n|            Центральноукраїнський національний технічний університет            |");
    printf("\n|                                   2024 рік                                     |");
    printf("\n --------------------------------------------------------------------------------");

    printf("\n\n");
    int i = 0;
    do {
        printf("Уведіть %d-ий елемент масиву (лише натуральне число): ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] <= 0) {
            printf("Натуральне число не може бути меншим за 0!\n");
            continue;
        }

        i += 1;
    } while (i < 9);

    for (int i = 0; i < 9; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
            min_index = i;
        }

        if (numbers[i] > max_value) {
            max_value = numbers[i];
            max_index = i;
        }
    }

    numbers[min_index] = max_value;
    numbers[max_index] = min_value;

    printf("\nМодифікований масив:");
    for (int i = 0; i < 9; i++) {
        printf(" %d", numbers[i]);
    }

    printf("\n\nДля виходу натисніть на будь-яку клавішу...");
    getch();

    return 0;
}
