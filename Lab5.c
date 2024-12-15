#include <stdio.h>
#include <string.h>

void reversedString(char* str) {

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {

        char temp = str[i];

        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;

    }
}

int main() {

    char firstString[50];
    char secondString[50];
    char concatenatedString[100];  

    printf("Enter the first string: ");
    fgets(firstString, 50, stdin);
    firstString[strcspn(firstString, "\n")] = '\0'; //removed the newline after the "Enter first string:" and accounts for the '\0'

    printf("Enter the second string: ");
    fgets(secondString, 50, stdin);
    secondString[strcspn(secondString, "\n")] = '\0';

    int firstLength = strlen(firstString); // calculates the amount of letters in the strings and stores them into new variables to be used later
    int secondLength = strlen(secondString);

    printf("Length of the first string: %d\n", firstLength);
    printf("Length of the second string: %d\n", secondLength);

    int result = strcmp(firstString, secondString); //comparing the strings

    if (result == 0) {

        printf("The strings are the same\n");

    } else if (result < 0){ // if the number is negative, the first variable comes before

        printf("%s comes before %s alphabetically.\n",firstString, secondString);

    } else if (result > 0){

        printf("%s comes before %s alphabetically\n", secondString, firstString);
    }

    strcpy(concatenatedString, firstString); //this concatenates the string (combines them together) and does not print the concatenated string reversed for the reversed first string
    strcat(concatenatedString, secondString);

    printf("Concatenated string: %s\n", concatenatedString);

    reversedString(firstString); // do this to reverse the strings individually
    reversedString(secondString);

    printf("Reversed first string: %s\n", firstString);
    printf("Reversed second string: %s\n", secondString);

    return 0;
}