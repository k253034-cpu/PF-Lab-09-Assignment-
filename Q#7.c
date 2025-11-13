#include <stdio.h>

float calculateRentalCost(int days, float kilometers) {
    float baseRate = 40.0;
    float totalBaseCost, extraKm, extraCost = 0.0, totalCost;

    totalBaseCost = days * baseRate; 

    
    float allowedKm = days * 100.0;

    if (kilometers > allowedKm) {
        extraKm = kilometers - allowedKm;
        extraCost = extraKm * 0.25; 
    }

    totalCost = totalBaseCost + extraCost;

    
    if (days >= 7) {
        totalCost = totalCost * 0.90; 
        printf("Long-term discount applied (10%% off)\n");
    }

    printf("\n--- Rental Summary ---\n");
    printf("Days Rented: %d\n", days);
    printf("Kilometers Driven: %.2f km\n", kilometers);
    printf("Base Cost: $%.2f\n", totalBaseCost);
    printf("Extra Mileage Cost: $%.2f\n", extraCost);
    printf("-----------------------\n");

    return totalCost;
}

int main() {
    int days;
    float kilometers, totalCost;

    printf("Enter number of rental days: ");
    scanf("%d", &days);

    printf("Enter total kilometers driven: ");
    scanf("%f", &kilometers);

    totalCost = calculateRentalCost(days, kilometers);

    printf("Final Rental Cost: $%.2f\n", totalCost);

    return 0;
}

