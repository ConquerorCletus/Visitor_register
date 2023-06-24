#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"

void collectVisitorInfo() {
    char name[50], intendedVisitor[50], purposeOfVisit[251], phoneNumber[20], companyName[50];
    time_t arrivalTime;
    time(&arrivalTime); // get current time
   
    getchar();
    printf("\nPlease enter your name: \n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';// remove newline character
    
    printf("\nPlease enter the name of the person you are visiting: ");
    printf("\n");
    fgets(intendedVisitor, sizeof(intendedVisitor), stdin);
    intendedVisitor[strcspn(intendedVisitor, "\n")] = '\0'; // remove newline character
    
    printf("\nPlease enter the purpose of your visit : ");
    printf("\n");
    fgets(purposeOfVisit, sizeof(purposeOfVisit), stdin);
    purposeOfVisit[strcspn(purposeOfVisit, "\n")] = '\0'; // remove newline character
    
    printf("\nPlease enter your phone number: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);
    phoneNumber[strcspn(phoneNumber, "\n")] = '\0'; // remove newline character
    
    printf("\n\nPlease enter the name of your company's name: ");
    printf("\n");
    fgets(companyName, sizeof(companyName), stdin);
    companyName[strcspn(companyName, "\n")] = '\0'; // remove newline character
    

    printf("\n\n");
    printf("\t\tVISITOR'S DETAILS");
    printf("\n\tName: %s", name);
    printf("\n\tIntended visitor: %s", intendedVisitor);
    printf("\n\tPurpose of visit: %s", purposeOfVisit);
    printf("\n\tPhone number: %s", phoneNumber);
    printf("\n\tCompany name: %s", companyName);
    printf("\n\tArrival time: %s", ctime(&arrivalTime)); // convert time to string and print
    
    printf("Press any key to check out...");
    getchar(); // wait for user input to check out
    
    time_t checkoutTime;
    time(&checkoutTime); // get current time
    double visitDuration = difftime(checkoutTime, arrivalTime); // calculate duration of visit in seconds
    
    printf("\nThank you for visiting!\n");
    printf("Your visit lasted %.0f seconds.\n", visitDuration);
}

