#include <stdio.h>
#include "../service/Interface.h"

void choice_menu(int *choice) {
    switch (*choice) {
        case 1:
            search_point();
            printf("\n");
            run();
            break;
        case 0:
            printf("Exit program.");
            break;
        default:
            printf("Invalid choice!\n");
            run();
    }
}

int run() {
    show_menu();
    printf("Make a choice: ");
    int choice;
    scanf("%d", &choice);
    choice_menu(&choice);
    return choice;
}
