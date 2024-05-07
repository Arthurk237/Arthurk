#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char option, operator;
    double num1, num2;
    char ch[3];
    double memory[5] = {0.0};

    printf("Welcome To My Command Line Calculator\n");//Welcome Message
    printf("Developer: Arthur Kuate\n");// developer name
    printf("Version 1: Assignment 1\n");// Version Type
    printf("Date: 12/02/2024\n");// Revision Date
    printf("------------------------------------------\n");

    printf("Main Menu\n"); //Main Menu
    printf("Select one of the following options:\n");// Various Options of the Calculator
    printf("B) - Binary Mathematical Operations, such as addition, subtraction, multiplication, division, remainder, power, maximum, and minimum\n");
    printf("U) - Unary Mathematical Operations, such as square root, logarithm, exponentiation, ceiling, and floor\n");
    printf("A) - Advanced Mathematical Operations, using variables, arrays\n");
    printf("V) – Define variables and assign them values\n");
    printf("E) - Exit\n");

    do {
        printf("Please select your option: (B, U, A, V, E)\n");//ask the user to enter an option
        scanf(" %c", &option);

        switch(option) {// Shows the different options of the main menu
            case 'B': // Perform Basic calculations and ask the user for inputs
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Choose Operator (+, -, *, /, %%, P, X, I): ");
                scanf(" %c", &operator);
                printf("Enter the second number: ");
                scanf("%lf", &num2);

                switch(operator) {// Shows the different operators 
                    case '+': // Addition
                        printf("The result is %lf\n", num1 + num2);
                        break;
                    case '-': // Subtraction
                        printf("The result is %lf\n", num1 - num2);
                        break;
                    case '*': // Multiplication
                        printf("The result is %lf\n", num1 * num2);
                        break;
                    case '/': // Division
                        printf("The result is %lf\n", num1 / num2);
                        break;
                    case '%':
                        printf("The result is %lf\n", fmod(num1,num2));
                        break;
                    case 'P':
                        printf("The result is %lf\n", pow(num1,num2));
                        break;
                    case 'X':
                        printf("The result is %lf\n", fmax(num1,num2));
                        break;
                    case 'I':
                        printf("The result is %lf\n", fmin(num1,num2));
                        break;
                    default:
                        printf("Invalid operator\n");
                        break;
                }
                break;
            case 'U':
                printf("Enter the operator (S, L, E, C, F): ");
                scanf(" %c", &operator);
                printf("Enter the number: ");
                scanf("%lf", &num1);

                switch(operator) {
                    case 'S': // Square root
                        printf("The result is %lf\n", sqrt(num1));
                        break;
                    case 'L': // Natural logarithm
                        printf("The result is %lf\n", log(num1));
                        break;
                    case 'E': // Exponentiation
                        printf("The result is %lf\n", exp(num1));
                        break;
                    case 'C': // Ceiling
                        printf("The result is %lf\n", ceil(num1));
                        break;
                    case 'F': // Floor
                        printf("The result is %lf\n", floor(num1));
                        break;
                    default:
                        printf("Invalid operator\n");
                        break;
                }
                break;
            case 'A':
                // Advanced operations submenu
                printf("Advanced Mathematical Operations\n");
                printf("Select one of the following options:\n");
                printf("B) - Binary Mathematical Operations with variables\n");
                printf("U) - Unary Mathematical Operations with variables\n");
                printf("E) - Exit to Main Menu\n");
                printf("Please select your option: ");
                scanf(" %c", &option);

                switch(option) {
                    case 'B': // Perform Basic calculations and ask the user for inputs
                        printf("Enter the first number (or memory slot): ");
                        scanf(" %s", &ch);
                        switch(ch[0]) {
                            case 'a': 
                                num1 = memory[0];
                                break;
                            case 'b': 
                                num1 = memory[1];
                                break;
                            case 'c': 
                                num1 = memory[2];
                                break;
                            case 'd': 
                                num1 = memory[3];
                                break;
                            case 'e': 
                                num1 = memory[4];
                                break;
                            default: 
                                num1 = strtod(ch, NULL);
                                break;
                        }
                        printf("The num1 is %lf\n",num1);

                        printf("Choose Operator (+, -, *, /, %%, P, X, I): ");
                        scanf(" %c", &operator);

                        printf("Enter the second number (or memory slot): ");
                        scanf(" %s", &ch);
                        switch(ch[0]) {
                            case 'a': 
                                num2 = memory[0];
                                break;
                            case 'b': 
                                num2 = memory[1];
                                break;
                            case 'c': 
                                num2 = memory[2];
                                break;
                            case 'd': 
                                num2 = memory[3];
                                break;
                            case 'e': 
                                num2 = memory[4];
                                break;
                            default: 
                                num2 = strtod(ch, NULL);
                                break;
                        }
                        printf("The Num 2  is %lf\n",num2);

                        switch(operator) {
                            case '+': // Addition
                                printf("The result is %lf\n", num1 + num2);
                                break;
                            case '-': // Subtraction
                                printf("The result is %lf\n", num1 - num2);
                                break;
                            case '*': // Multiplication
                                printf("The result is %lf\n", num1 * num2);
                                break;
                            case '/': // Division
                                printf("The result is %lf\n", num1 / num2);
                                break;
                            case '%':
                                printf("The result is %lf\n", fmod(num1,num2));
                                break;
                            case 'P':
                                printf("The result is %lf\n", pow(num1,num2));
                                break;
                            case 'X':
                                printf("The result is %lf\n", fmax(num1,num2));
                                break;
                            case 'I':
                                printf("The result is %lf\n", fmin(num1,num2));
                                break;
                            default:
                                printf("Invalid operator\n");
                                break;
                        }
                        break;
                    case 'U': // Unary operations with variables
                        printf("Enter the operator (S, L, E, C, F): ");
                        scanf(" %c", &operator);
                        printf("Enter the operand (number or memory slot): ");
                        scanf(" %c", &ch);
                        num1 = (ch[0] >= 'a' && ch[0] <= 'e') ? memory[ch[0] - 'a'] : strtod(ch, NULL);
      
                        switch(operator) {
                            case 'S': // Square root
                                printf("The result is %lf\n", sqrt(num1));
                                break;
                            case 'L': // Natural logarithm
                                printf("The result is %lf\n", log(num1));
                                break;
                            case 'E': // Exponentiation
                                printf("The result is %lf\n", exp(num1));
                                break;
                            case 'C': // Ceiling
                                printf("The result is %lf\n", ceil(num1));
                                break;
                            case 'F': // Floor
                                printf("The result is %lf\n", floor(num1));
                                break;
                            default:
                                printf("Invalid operator\n");
                                break;
                        }
                        break;
                    case 'E': // Exit to Main Menu
                        printf("Exiting to Main Menu\n");
                        break;
                    default:
                        printf("Invalid option\n");
                        break;
                }
                break;
            case 'V':
                printf("Enter memory slot (a, b, c, d, e): ");
                scanf(" %c", &operator);
                printf("Enter value to store in memory slot %c: ", operator);
                scanf("%lf", &num1);

                switch(operator) {
                    case 'a':
                        memory[0] = num1;
                        break;
                    case 'b':
                        memory[1] = num1;
                        break;
                    case 'c':
                        memory[2] = num1;
                        break;
                    case 'd':
                        memory[3] = num1;
                        break;
                    case 'e':
                        memory[4] = num1;
                        break;
                    default:
                        printf("Invalid memory slot.\n");
                        break;
                }
                break;
            case 'E'://Exit
                printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n");
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while(option != 'E');//Continue until 'E' Exit is entered
    return 0;
}
