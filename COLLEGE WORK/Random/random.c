#include <stdio.h>

void convertToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}

void convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
}

int main() {
    float temperature;
    int choice;

    printf("Enter 1 to convert Celsius to Fahrenheit or 2 for Fahrenheit to Celsius: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertToFahrenheit(temperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertToCelsius(temperature);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

