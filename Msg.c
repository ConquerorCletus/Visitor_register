#include "main.h"

void collectVisitorMessage() {
    char visitorName[MAX_NAME_LENGTH];
    char recipient[MAX_NAME_LENGTH];
    char message[MAX_MESSAGE_LENGTH];
    char filePath[MAX_PATH_LENGTH];

    getchar();

    printf("Please enter your name: ");
    printf("\n");
    fgets(visitorName, MAX_NAME_LENGTH, stdin);
    visitorName[strcspn(visitorName, "\n")] = '\0'; 

    printf("Please enter the recipient's name: \n");
    fgets(recipient, MAX_NAME_LENGTH, stdin);
    recipient[strcspn(recipient, "\n")] = '\0'; 

    printf("Please enter your message (max 255 characters):\n");
    fgets(message, MAX_MESSAGE_LENGTH, stdin);
    message[strcspn(message, "\n")] = '\0'; 

    sprintf(filePath, "messages/%s_message.txt", visitorName);
    FILE *fp = fopen(filePath, "w");
    if (fp == NULL) {
        printf("Error: unable to open messages file for writing.\n");
        return;
    }
    fprintf(fp, "To:\n %s\n\n%s", recipient, message);
    fclose(fp);

    printf("Message successfully passed!!\n");
}

