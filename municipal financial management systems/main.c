#include <stdio.h>

int main() {
    char municipality[100];
    char mayor[100];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    
    printf("Enter Municipality Name: ");
    scanf("%49s", &municipality);

    printf("Enter Mayor: ");
    scanf("%49s", &mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    
    printf("Municipal Financial Management System\n");
    printf("Municipality: %s", municipality);
    printf("Mayor: %s", mayor);
    printf("Population: %d\n", population);

    return 0;
}
