#include <stdio.h>

int main() {
    double cp, sp, diff, percent;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp) {
        diff = sp - cp;
        percent = (diff / cp) * 100.0;
        printf("Profit %.0f%%\n", percent);
    } else if (cp > sp) {
        diff = cp - sp;
        percent = (diff / cp) * 100.0;
        printf("Loss %.0f%%\n", percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}