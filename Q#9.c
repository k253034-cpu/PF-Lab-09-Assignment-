#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;
    int *p1, *p2, *p3;
    int *temp;

   
    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Initial values: a=%d, b=%d, c=%d\n", a, b, c);

    
    temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

   
    *p1 += 50;   
    *p2 -= 70;   
    *p3 *= 2;    

    printf("\nAfter first pointer manipulation:\n");
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    
    p1 = &c;
    p2 = &a;
    p3 = &b;

    
    *p1 += 20;   
    *p2 -= 30;   
    *p3 *= 2;    

    printf("\nAfter second pointer manipulation:\n");
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}

