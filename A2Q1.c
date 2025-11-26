#include <stdio.h>

void celciusToFahrenheit()
{
    float C,F;
    printf("Enter temperature in Celcius: ");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Temperature in Fahrenheit: %f F\n",F);
}

void fahrenheitToCelcius()
{
    float C,F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Temperature in Celcius: %.2f C\n", C);
}

int main()
{
    int choice;
    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celcius to Farhenheit\n");
    printf("2. Convert Farhenheit to Celcius\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        celciusToFahrenheit();
        break;
    case 2:
        fahrenheitToCelcius();
        break;
    default:
        printf("Invalid choice! please select option 1 or 2\n");
    }
    return 0;
}
