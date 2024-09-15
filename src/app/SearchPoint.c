#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void run() {
    // Об'явленні змінних типу float та integer
    float diam, radius, dis;
    float x, y, point;
    int rate = 2;

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
    printf("\n");
    run();
}
