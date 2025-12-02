//Write a program to input two numbers and display their sum, difference product, and quotient.
#include <stdio.h>
int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (b==0) {
        printf("The value of b is invalid");
    }
    else {
        printf("Quotient is %.2f\n", quotient);
    }
    return 0;
}
