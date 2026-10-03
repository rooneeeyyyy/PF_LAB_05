/*Task 5: Triangle Classifier
Write a program that accepts three sides of a triangle as input. First use a nested if-else check to determine
whether the three sides can actually form a valid triangle (the sum of any two sides must be greater than the
third). If valid, use further nested if-else statements to classify the triangle as Equilateral, Isosceles, or
Scalene. If not valid, print 'Not a valid triangle'.*/
#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter first side of the triangle: ");
    scanf("%d", &a);
    printf("Enter second side of the triangle: ");
    scanf("%d", &b);
    printf("Enter third side of the triangle: ");
    scanf("%d", &c);

    if (a + b > c) {
        if (a + c > b) {

            if (b + c > a) {

                if (a == b) {
                    if (b == c) {
                        printf("Equilateral triangle");
                    }
                    else {
                        printf("Isosceles triangle");
                    }
                }
                else {
                    if (a == c) {
                        printf("Isosceles triangle");
                    }
                    else {
                        if (b == c) {
                            printf("Isosceles triangle");
                        }
                        else {
                            printf("Scalene triangle");
                        }
                    }
                }
            }
            else {
                printf("Triangle is not valid\n");
            }
        }
        else {
            printf("Triangle is not valid\n");
        }
    }
    else {
        printf("Triangle is not valid\n");
    }
}