/*Task 2: Ticket Pricing at a Cinema
A cinema charges different ticket prices based on age and day of the week. Take the customer's age and a
character for the day ('W' for weekday, 'H' for weekend/holiday) as input. Using nested if-else, if the age is
less than 12 or greater than 60, apply a discounted price; within that, check the day to decide between the
weekday-discount price and the weekend-discount price. If the age is between 12 and 60, do the same day-
based check but using the regular weekday and weekend prices. Print the final ticket price.*/

#include <stdio.h>
int main(){

    char choice;
    int age;
    float discount, rate, total;
    discount = 0.00;
    printf("Press H for weekend/holiday booking. \n");
    printf("Press W for Weekdays booking. \n");
    scanf(" %c", &choice);
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    if (age <= 12 || age >= 60){
        if (choice == 'H'){
            rate = 5000;
            discount = rate * 0.2;
            
        }
        else if( choice == 'W'){
            rate = 3500;
            discount = rate * 0.2;

        }
        else{
            printf("Invalid option selected");
        }
        
    }
    else {
        if (choice == 'H'){
            rate = 5000;
            
        }
        else if( choice == 'W'){
            rate = 3500;

        }
        else{
            printf("Invalid option selected\n");
        }
    }
    total = rate - discount;
    printf("Your total bill: %.2f \n", total);
}