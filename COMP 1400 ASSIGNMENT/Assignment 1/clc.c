#include <stdio.h>

int main() {
    char option, operator;
    double num1, num2;
    
    printf("Welcome To My Command Line Calculator\n");//Welcome Message
    printf("Developer: Arthur Kuate\n");// developper name
    printf("Version 1: Assignment 1\n");// Version Type
    printf("Date: 12/02/2024\n");// Revision Date
    printf("------------------------------------------\n");

    printf("Main Menu\n"); //Main Menu
    printf("Select one of the following options:\n");// Various Options of the Calculator
    printf("B) - Binary Mathematical Operations, such as addition,subtraction,multiplication and division\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) – Define variables and assign them values.\n");
    printf("E) - Exit\n");

    do {
        printf("Please select your option:( B , U , A , V , E )\n ");//ask the user to enter an option
        scanf(" %c", &option);

        switch(option) {// Shows the different options of the main menu
            case 'B': // Perform Basic calculations and ask the user for inputs
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Choose Operator (+, -, *, /): ");
                scanf(" %c", &operator);
                printf("Enter the second number: ");
                scanf("%lf", &num2);

                switch(operator) {// Shows the different operators 
                    case '+':// Addition
                        printf("The result is %lf\n", num1 + num2);
                        break;
                    case '-'://Subtraction
                        printf("The result is %lf\n", num1 - num2);
                        break;
                    case '*'://Multiplication
                        printf("The result is %lf\n", num1 * num2);
                        break;
                    case '/'://Division
                            printf("The result is %lf\n", num1 / num2);
                        break;
                    default:
                        break;
                }
                break;
            case 'U':
                printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
                break;
            
            case 'A':
               printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
               break;
            case 'V':
                printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
                break;
            case 'E'://Exit
                printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n");
                break;
            default:
                printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
                break;
        }
    } while(option != 'E');//Continue until 'E' Exit is entered

    return 0;
}