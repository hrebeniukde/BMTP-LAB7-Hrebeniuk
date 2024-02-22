#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 512

int main(void) {
    char input[MAX_LENGTH];
    int count_d;

    system("chcp 65001 & cls");

    printf(" --------------------------------------------------------------------------------");
    printf("\n|Застосунок призначений для обчислення кількості літер \"д\" у введенному реченні  |");
    printf("\n|або, якщо цей символ відсутній, замінення літер \"а\" та \"я\" на заголовкові.      |");
    printf("\n|                  Розробник застосунку: Гребенюк Денис Олегович                 |");
    printf("\n|            Центральноукраїнський національний технічний університет            |");
    printf("\n|                                   2024 рік                                     |");
    printf("\n --------------------------------------------------------------------------------");

    printf("\n\nВведіть речення закінчивши його знаком \".\", \"!\" або \"?\": ");
    fgets(input, MAX_LENGTH, stdin);
    input[strcspn(input, ".!?") + 1] = '\0';

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 'д' || input[i] == 'Д') {
            count_d += 1;
        }
    }

    if (count_d == 0) {
        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] == 'а') {
                input[i] = 'А';
            } else if (input[i] == 'я') {
                input[i] = 'Я';
            }
        }

        printf("Перетворене речення: %s", input);
    } else {
        printf("Кількість літер \"д\" у реченні: %d", count_d);
    }

    printf("\n\nДля виходу натисніть на будь-яку клавішу...");
    getch();

    return 0;
}
