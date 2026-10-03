/*Task 9: Traffic Light and Action Simulator
Write a program where the outer switch takes a character representing a traffic light color ('R', 'Y', 'G'). For
the 'R' (red) and 'G' (green) cases, nest an inner switch that takes a second character representing whether a
pedestrian button has been pressed ('Y' for yes, 'N' for no), and prints an appropriate action message for
each combination (e.g., stop and wait, stop and cross, go, go but watch for pedestrians). The 'Y' (yellow)
case does not need a nested switch.*/
#include<stdio.h>

int main(){
    char light,button;
    printf("Enter R for Red\n");
    printf("Enter Y for Yellow\n");
    printf("Enter G for Green\n");
    scanf(" %c",&light);
    switch(light){
        case 'R':
            printf("Enter Y if pedestrian button is pressed\n");
            printf("Enter N if pedestrian button is not pressed\n");
            scanf(" %c",&button);
            switch(button){
                case 'Y':
                    printf("Stop and cross");
                    break;
                case 'N':
                    printf("Stop and wait");
                    break;
                default:
                    printf("Invalid input");
            }
            break;
        case 'Y':
            printf("Slow down and prepare to stop");
            break;
        case 'G':
            printf("Enter Y if pedestrian button is pressed\n");
            printf("Enter N if pedestrian button is not pressed\n");
            scanf(" %c",&button);
            switch(button){
                case 'Y':
                    printf("Go but watch for pedestrians");
                    break;
                case 'N':
                    printf("Go");
                    break;
                default:
                    printf("Invalid input");
            }
            break;
        default:
            printf("Invalid traffic light");
    }
    return 0;
}