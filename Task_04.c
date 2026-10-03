/*Task 4: Electricity Bill Calculator
Write a program that reads the number of units of electricity consumed and the connection type ('D' for
domestic, 'C' for commercial). Using nested if-else, first check the connection type. Inside the domestic
branch, nest further if-else statements to apply different per-unit rates for usage ranges 0–100, 101–300,
and above 300 units. Do the same with different (commercial) rates inside the commercial branch. Print the
total bill.*/
#include <stdio.h>

int main() {
    char type;
    float rate = 0, unit;
    printf("Enter the consumed units: \n");
    scanf("%f",&unit);
    printf("Type 'D' for domestic connection.\n");
    printf("Type 'C' for commercial type.\n");
    scanf(" %c", &type);

    if (type == 'D'){
        if (unit >= 0 && unit <= 100){
            rate = 25 * unit;
        }
        else if(unit > 100 && unit <= 300){
            rate = 40 * unit;
        }
        else{
            printf("Invalid input\n");

        }
    
    }
    else if (type == 'C'){
        if (unit >= 0 && unit <= 100){
            rate = 35 * unit;
        }
        else if(unit > 100 && unit <= 300){
            rate = 50 * unit;
        }
        else{
            printf("Invalid input\n");
        }
    }
    else{
        printf("Invalid input\n");
    }
    printf("Your total bill is: %.2f", rate);

}
