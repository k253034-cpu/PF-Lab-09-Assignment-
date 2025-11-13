#include <stdio.h>

float calculateTotalCost(float orderAmount, float weight) {
    float shippingCost;

    if (orderAmount > 100) {
        shippingCost = 0;
        printf("Free Shipping Applied! ??\n");
    } 
    else {
        if (weight < 2)
            shippingCost = 10;
        else if (weight <= 5)
            shippingCost = 15;
        else
            shippingCost = 20;
    }

    float totalCost = orderAmount + shippingCost;
    printf("Shipping Cost: $%.2f\n", shippingCost);

    return totalCost;
}

int main() {
    float orderAmount, weight, total;

    printf("Enter order amount ($): ");
    scanf("%f", &orderAmount);

    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    total = calculateTotalCost(orderAmount, weight);

    printf("Total Cost to Pay: $%.2f\n", total);

    return 0;
}

