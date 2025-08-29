#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

    int choice = 0;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    float kelvin = 0.0f;




    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");

    printf("Enter your Choice: ");
    scanf("%d", &choice);

    if (choice == 1){

        printf("Enter Celsius Value: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("%f C = %f F", celsius, fahrenheit);
    }
    else if(choice == 2){
        printf("Enter Celsius Value: ");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("%.3f C = %.3fK", celsius, kelvin);
    }
    else if(choice == 3){
        printf("Enter Fahrenheit Value: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)/1.8;
        printf("%.3f F = %.3f C", fahrenheit, celsius);
    }
    else if(choice == 4){
        printf("Enter Fahrenheit Value: ");
        scanf("%f", &fahrenheit);
        kelvin = ((fahrenheit - 32)/1.8)+273.15;
        printf("%.3f F = %.3fK", fahrenheit, kelvin);
    }
    else if(choice == 5){
        printf("Enter Kelvin Value: ");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        printf("%.3fK = %.3f C", kelvin, celsius);
    }
    else if(choice == 6){
        printf("Enter Kelvin Value: ");
        scanf("%f", &kelvin);
        fahrenheit = ((kelvin - 273.15)*1.8) + 32;
        printf("%.3fK = %.3f F", kelvin, fahrenheit);
    }
    else {

        printf("Your choice is invalid, Please pick (1,2,3,4,5,6)!");
    }
    return 0;
}
