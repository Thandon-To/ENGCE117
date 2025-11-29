#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        printf("Input Error\n");
        return 1;
    }

    if (planCode == 1)
    {
    
        float PRICE = 299.0;
        totalBill = PRICE;

        if (dataUsage_GB > 10)
        {
            float excess_GB = dataUsage_GB - 10.0;
            totalBill += (10.0 * excess_GB);
        }
        
        printf("%.2f\n", totalBill);

    } 
    else if (planCode == 2)
    {
        float PRICE = 599.0;
        float PENALTY = 50.0;
        totalBill = PRICE;

        if (dataUsage_GB > 20)
        {
            float excess_GB = dataUsage_GB - 20.0;
            totalBill += PENALTY;
            totalBill += (5.0 * excess_GB);
        }
        
        printf("%.2f\n", totalBill);
    }
    else {
        printf("Invalid Plan Code\n");
    }
    
    return 0;
}
