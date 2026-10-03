/*Task 7: University Result Card
Extend Example 2 (the country-listing program) style of thinking to a university context. Write a program
where the outer switch selects a department using a character ('C' for Computer Science, 'E' for Electrical
Engineering, 'B' for Business). Inside each department's case, use an inner switch on a semester number (1,
2, or 3) to print the name of one core course offered that semester in that department. Include a default case
at both levels for invalid input.*/
#include<stdio.h>

int main(){
    char department;
    int semester;

    printf("Enter C for Computer Science\n");
    printf("Enter E for Electrical Engineering\n");
    printf("Enter B for Business\n");
    scanf(" %c",&department);

    printf("Enter semester (1, 2, or 3): \n");
    scanf("%d",&semester);

    switch(department){
        case 'C':
            switch(semester){
                case 1:
                    printf("Core Course: Programming Fundamentals");
                    break;
                case 2:
                    printf("Core Course: Object Oriented Programming");
                    break;
                case 3:
                    printf("Core Course: Data Structures and Algorithm");
                    break;
                default:
                    printf("Invalid semester");
            }
            break;

        case 'E':
            switch(semester){
                case 1:
                    printf("Core Course: Circuit Analysis");
                    break;
                case 2:
                    printf("Core Course: Applied Physics");
                    break;
                case 3:
                    printf("Core Course: Electricity");
                    break;
                default:
                    printf("Invalid semester");
            }
            break;

        case 'B':
            switch(semester){
                case 1:
                    printf("Core Course: Accounts");
                    break;
                case 2:
                    printf("Core Course: Business");
                    break;
                case 3:
                    printf("Core Course: Economics");
                    break;
                default:
                    printf("Invalid semester");
            }
            break;

        default:
            printf("Invalid department");
    }

    return 0;
}