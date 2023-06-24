#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*void collectVisitorInfo();*/

int main() {
    int choice;
    
    do {
	    printf("\n");
	    printf("\tWELCOME TO CONQUERORDEVS\n");
	printf("It is a pleasure having you, Dear esteemed visitors. \n");
        printf("\t1. visit\n");
        printf("\t2. Pass a Message\n");
        printf("\t3. Exit\n");
        printf("select option  1 || 2 || 3 :  ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                collectVisitorInfo();
                break;
            case 2:
                collectVisitorMessage();
		break;
            case 3:
                exit(0); // exit the program
                break;
            default:
                printf("Invalid Option. Please try again.\n");
                break;
        }
    } while (choice != 3);
    
    return 0;
}

