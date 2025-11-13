#include <stdio.h>


float calculateTax(float grossIncome) {
    float tax = 0.0, netIncome;

    if (grossIncome <= 20000) {
        tax = 0;
    }
    else if (grossIncome <= 50000) {
        tax = (grossIncome - 20000) * 0.10;  
    }
    else {
        tax = (30000 * 0.10) + ((grossIncome - 50000) * 0.20); 
    }

    netIncome = grossIncome - tax;

    printf("\n--- Payroll Summary ---\n");
    printf("Gross Income: $%.2f\n", grossIncome);
    printf("Tax Amount:   $%.2f\n", tax);
    printf("Net Income:   $%.2f\n", netIncome);
    printf("------------------------\n");

    return tax;
}

int main() {
    float grossIncome, tax, netIncome;

    printf("Enter gross income ($): ");
    scanf("%f", &grossIncome);

    tax = calculateTax(grossIncome);
    netIncome = grossIncome - tax;

    printf("Final Net Income: $%.2f\n", netIncome);

    return 0;
}

