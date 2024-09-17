#include <stdio.h>
#include <tgmath.h>

void search_point() {
    float diam, radius, dis;
    float x, y, point;
    int rate = 2;
    // Об'явленні змінних типу float та integer
    // Введення даних користувачем
    printf("Input diametr: ");
    scanf("%f", &diam);
    printf("Input \'x\': ");
    scanf("%f", &x);
    printf("Input \'y\': ");
    scanf("%f", &y);

    // Розрахунок радіуса, сторони квадрата та розрахунок крапки за величиною
    radius = diam / 2;
    dis = radius;
    point = sqrt(pow(x, rate) + pow(y, rate));

    // умова для визначееня в якій площіні знаходеться крапка
    if (fabs(x) <= dis && fabs(y) <= dis) {
        if (x < 0 && y > 0 && fabs(point) >= radius) {
            printf("The point is in area \"A\"");
        } else if (x > 0 && y > 0 && fabs(point) >= radius) {
            printf("The point is in area \"B\"");
        } else {
            printf("The point is not in region \"A\" and \"B\"");
        }
    } else {
        printf("Point outside the figures");
    }
}
