#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numbers[9], max_index, min_index;
    int max_value = INT_MIN;
    int min_value = INT_MAX;

    system("chcp 1251 & cls");

    printf(" --------------------------------------------------------------------------------");
    printf("\n|���������� ����������� ��� ����� ������ ���������� �������� �������� ������  |");
    printf("\n|� ��������� ��������� �������� ������.                                          |");
    printf("\n|                  ��������� ����������: �������� ����� ��������                 |");
    printf("\n|            �������������������� ������������ �������� ����������            |");
    printf("\n|                                   2024 ��                                     |");
    printf("\n --------------------------------------------------------------------------------");

    printf("\n\n");
    int i = 0;
    do {
        printf("������ %d-�� ������� ������ (���� ���������� �����): ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] <= 0) {
            printf("���������� ����� �� ���� ���� ������ �� 0!\n");
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

    printf("\n������������� �����:");
    for (int i = 0; i < 9; i++) {
        printf(" %d", numbers[i]);
    }

    printf("\n\n��� ������ �������� �� ����-��� ������...");
    getch();

    return 0;
}
