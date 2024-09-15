#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../funcs.h"

void search_point() {
    float diam, radius, dis;
    float x, y, point;
    int rate = 2;
    // Об'явленні змінних типу float та integer
    // Введення даних користувачем
    printf("Enter diametr: ");
    scanf("%f", &diam);
    printf("Enter \'x\': ");
    scanf("%f", &x);
    printf("Enter \'y\': ");
    scanf("%f", &y);

    // Розрахунок радіуса, сторони квадрата та розрахунок крапки за величиною
    radius = diam / 2;
    dis = radius;
    point = sqrt(pow(x, rate) + pow(y, rate));

    // умова для визначееня в якій площіні знаходеться крапка
    if (abs(x) <= dis && abs(y) <= dis) {
        if (x < 0 && y > 0 && abs(point) >= radius) {
            printf("The point is in area \"A\"");
        } else if (x > 0 && y > 0 && abs(point) >= radius) {
            printf("The point is in area \"B\"");
        } else {
            printf("The point is not in region \"A\" and \"B\"");
        }
    } else {
        printf("Point outside the figures");
    }
}

void choice_menu(int *choice) {
    switch (*choice) {
        case 1:
            search_point();
            printf("\n");
            run();
            break;
        case 0:
            printf("Exit program");
            break;
        default:
            printf("Invalid choice\n");
            run();
    }
}

void run() {
    show_menu();
    printf("Make a choice: ");
    int choice;
    scanf("%d", &choice);
    choice_menu(&choice);
}
