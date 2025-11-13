#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *p = &grid[0][0];     
    int *p2 = &grid[1][0];    
    printf("Accessing elements using pointer arithmetic:\n");
    printf("*(p + 5) = %d\n", *(p + 5));   
    printf("*(p + 7) = %d\n", *(p + 7));   
    printf("*(p + 11) = %d\n", *(p + 11)); 

    printf("\nAccessing with second row pointer:\n");
    printf("*(p2) = %d\n", *(p2));         
    printf("*(p2 + 2) = %d\n", *(p2 + 2)); 
    printf("*(p2 - 1) = %d\n", *(p2 - 1)); 
    int i;
    printf("\nElements divisible by 3:\n");
    for (i = 0; i < 12; i++) {
        if (*(p + i) % 3 == 0)
            printf("%d ", *(p + i));
    }

    int last = *(*(grid + 2) + 3);  
    printf("\n\nLast element accessed differently: %d\n", last);

    return 0;
}

