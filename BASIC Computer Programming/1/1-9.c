#include<stdio.h>

int main() {
    int ZoneCode;
    float weight_kg;
    float totalCost;

    if (scanf("%d %f", &ZoneCode, &weight_kg) != 2) {
        return 1;
    } // end if

    switch (ZoneCode)
    {
    case 1:
        if (weight_kg <= 5) {
            totalCost = 50; 
        } else if (weight_kg > 5) {
            totalCost = 80; 
        }
        break;
    case 2:
        if (weight_kg <= 10) {
            totalCost = 150; 
        } else if (weight_kg > 10) {
            totalCost = 250; 
        }
        break;
    case 3:
        totalCost = 500; 
        break;
    
    default:
    printf("Invalid Zone Code");
        break;
    }

    if (ZoneCode == 1 && ZoneCode == 2 && ZoneCode == 3)
    {
        printf("%.2f\n", totalCost);
    }
    
    return 0;
}