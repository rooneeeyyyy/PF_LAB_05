/*Task 8: Restaurant Ordering System
Write a program that models a restaurant menu using nested switch-case statements. The outer switch
should let the user choose a category using a number: 1 for Beverages, 2 for Main Course, or 3 for Desserts.
Within each category's case, use an inner switch to let the user pick one of three specific items and print its
price. Make sure every switch (outer and inner) has a default case.*/
#include<stdio.h>

int main(){
    int category,item;

    printf("Enter 1 for Beverages\n");
    printf("Enter 2 for Main Course\n");
    printf("Enter 3 for Desserts\n");
    scanf("%d",&category);

    switch(category){
        case 1:
            printf("Enter 1 for Coke\n");
            printf("Enter 2 for Coffee\n");
            printf("Enter 3 for Tea\n");
            scanf("%d",&item);
            switch(item){
                case 1:
                    printf("Coke = Rs.150");
                    break;
                case 2:
                    printf("Coffee = Rs.250");
                    break;
                case 3:
                    printf("Tea = Rs.100");
                    break;
                default:
                    printf("Invalid item");
            }
            break;
        case 2:
            printf("Enter 1 for Burger\n");
            printf("Enter 2 for Pizza\n");
            printf("Enter 3 for Pasta\n");
            scanf("%d",&item);
            switch(item){
                case 1:
                    printf("Burger = Rs.500");
                    break;
                case 2:
                    printf("Pizza = Rs.800");
                    break;
                case 3:
                    printf("Pasta = Rs.600");
                    break;
                default:
                    printf("Invalid item");
            }
            break;
        case 3:
            printf("Enter 1 for Ice Cream\n");
            printf("Enter 2 for Cake\n");
            printf("Enter 3 for Brownie\n");
            scanf("%d",&item);

            switch(item){
                case 1:
                    printf("Ice Cream = Rs.200");
                    break;
                case 2:
                    printf("Cake = Rs.300");
                    break;
                case 3:
                    printf("Brownie = Rs.250");
                    break;
                default:
                    printf("Invalid item");
            }
            break;
        default:
            printf("Invalid category");
    }
    return 0;
}