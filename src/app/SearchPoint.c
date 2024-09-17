//Pashkulskyi Yevhen AS-246
#include <stdio.h>
#include <math.h>

int main() {
    // Об'явленні змінних типу float та integer
    float diam, radius, dis;// зміна типу float: діаметр, радіус, половина сторони квадрата
    float x_coordinate, y_coordinate, point;// змінні для визначення крапки на графіку
    int rate = 2;//

    // Введення даних користувачем
    printf("Input diametr: ");
    scanf("%f", &diam);
    printf("Input \'x\' and \'y\' coordinates separated by space: ");
    scanf("%f%f", &x_coordinate, &y_coordinate);

    // Розрахунок радіуса, сторони квадрата та розрахунок крапки за величиною
    radius = diam / 2;
    dis = radius; // це можно було не писати але для розуміння значень в коді я присвоїв половині квадрату радіус так як центр в них однаковий
    point = sqrt(pow(x_coordinate, rate) + pow(y_coordinate, rate)); // пошук крапки за теоремою піфагора

    /*умова для визначення в якій площині знаходиться крапка
     *використовуючи оператор розгалуження, я прописав усову виконання коду з використанням
     *функції fabs для повернення абсолютного значення що на мій погляд легше читати код
     *
     */
    if (fabs(x_coordinate) <= dis && fabs(y_coordinate) <= dis) {// х та у я
        if (x_coordinate < 0 && y_coordinate > 0 && fabs(point) >= radius) {
            printf("The point is in area \"A\"");
        } else if (x_coordinate > 0 && y_coordinate > 0 && fabs(point) >= radius) {
            printf("The point is in area \"B\"");
        } else {
            printf("The point is not in region \"A\" and \"B\"");
        }
    } else {
        printf("Point outside the figures");
    }
    return 0;//возврат 0 так як функція має интове значення
}
