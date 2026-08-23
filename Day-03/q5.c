#include <stdio.h>

int main() {
    int celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    
    int fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Fahrenheit=%d\n", fahrenheit);
    return 0;
}