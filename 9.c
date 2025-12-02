//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount, factor = 1;
    int i;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    for(i = 1; i <= time; i++) {
        factor = factor * (1 + rate / 100);
    }
    amount = principal * factor;
    compoundInterest = amount - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
