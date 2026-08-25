#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    double simple_interest = (principal * rate * time) / 100.0;
    double compound_interest = principal * (pow(1.0 + (rate / 100.0), time) - 1.0);
    
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simple_interest, compound_interest);
    return 0;
}
