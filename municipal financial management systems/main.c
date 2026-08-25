#include <stdio.h>

int main() {
    char municipality[100];
    char mayor[100];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    
    printf("Enter Municipality Name: ");
    fgets(municipality, sizeof(municipality), stdin);

    printf("Enter Mayor: ");
    fgets(mayor, sizeof(mayor), stdin);

    printf("Enter Population: ");
    scanf("%d", &population);

    
    printf("\n---------------------------------\n");
    printf("Municipality: %s", municipality);
    printf("Mayor: %s", mayor);
    printf("Population: %d\n", population);

    return 0;
}