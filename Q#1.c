#include <stdio.h>

float processTransaction(float remainingLimit, float transactionAmount) {
    if (transactionAmount <= remainingLimit) {
        remainingLimit -= transactionAmount;
        printf("Transaction APPROVED!\n");
    } else {
        printf("Transaction DECLINED! Amount exceeds remaining limit.\n");
    }
    return remainingLimit;
}

int main() {
    float remainingLimit = 5000.0; 
    float transactionAmount;

    printf("Enter transaction amount: $");
    scanf("%f", &transactionAmount);

    remainingLimit = processTransaction(remainingLimit, transactionAmount);

    printf("Remaining limit: $%.2f\n", remainingLimit);

    return 0;
}

