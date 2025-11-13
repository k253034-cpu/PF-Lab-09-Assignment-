#include <stdio.h>

float calculateBill(float foodCost, int numPeople) {
    float tax, tip, serviceCharge = 0, totalBill;

    tax = foodCost * 0.08;

    
    if (foodCost > 50)
        tip = foodCost * 0.15;
    else
        tip = foodCost * 0.10;

    
    if (numPeople > 6)
        serviceCharge = foodCost * 0.05;

    
    totalBill = foodCost + tax + tip + serviceCharge;

    
    printf("\n--- Bill Details ---\n");
    printf("Food Cost: $%.2f\n", foodCost);
    printf("Tax (8%%): $%.2f\n", tax);
    printf("Tip: $%.2f\n", tip);
    printf("Service Charge: $%.2f\n", serviceCharge);
    printf("----------------------\n");

    return totalBill;
}

int main() {
    float foodCost, total;
    int numPeople;

    printf("Enter total food cost ($): ");
    scanf("%f", &foodCost);

    printf("Enter number of people: ");
    scanf("%d", &numPeople);

    total = calculateBill(foodCost, numPeople);

    printf("Total Bill to Pay: $%.2f\n", total);

    return 0;
}

