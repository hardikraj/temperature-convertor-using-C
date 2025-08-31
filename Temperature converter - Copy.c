#include <stdio.h>

// Function that convert value from one unit to another unit
float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float fahrenheitToKelvin(float fahrenheit);
float kelvinToCelsius(float kelvin);
float kelvinToFahrenheit(float kelvin);

int main()
{

    // Declaring variable in which data will store when you will input the value
    float temperature;
    int choice;

    // Displaying a menu for the user to select in which unit you want to input the value
    printf("Temperature Converter Tool\n");
    printf("Choose the unit in which you want to input the temperature:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Taking temperature from user
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    // It will perform conversion on the basis of your input.
    switch (choice)
    {
    case 1: // If you are giving input as a Celsius
        printf("Celsius to Fahrenheit: %f\n", celsiusToFahrenheit(temperature));
        printf("Celsius to Kelvin: %f\n", celsiusToKelvin(temperature));
        break;
    case 2: // If you are giving input as a Fahrenheit
        printf("Fahrenheit to Celsius: %f\n", fahrenheitToCelsius(temperature));
        printf("Fahrenheit to Kelvin: %f\n", fahrenheitToKelvin(temperature));
        break;
    case 3: // If you are giving input as a Kelvin
        printf("Kelvin to Celsius: %f\n", kelvinToCelsius(temperature));
        printf("Kelvin to Fahrenheit: %f\n", kelvinToFahrenheit(temperature));
        break;

        // If your choice will be wrong then default condition will automatically print this statement

    default:
        printf("Invalid choice! Please run the program again and choose the valid option.\n");
    }

    printf("Thank You for using!\n");

    return 0;
}

// Function that convert value from Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function that convert value from Celsius to Kelvin
float celsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}

// Function that convert value from Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function that convert value from Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

// Function that convert value from Kelvin to Celsius
float kelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}

// Function that convert value from Kelvin to Fahrenheit
float kelvinToFahrenheit(float kelvin)
{
    return (kelvin - 273.15) * 9 / 5 + 32;
}
