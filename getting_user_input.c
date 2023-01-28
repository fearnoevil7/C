#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int age;
    // printf("Enter your age: ");
    // ****scanf() allows user to input something into the program and stores it into age number as an integer
    // scanf("%d", &age);
    // printf("You are %d years old", age);


    // getting a decimal from the user

    // double gpa;
    // printf("Enter your GPA: ");
    // ***** watch the lf and & sign
    // scanf("%lf", &gpa);
    // printf("Your GPA is %f", gpa);


    // example getting a single character from the user

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade);
    // printf("Your grade is a %c", grade);


    // ****example getting a string from the user
    // ****need to tell C how many characters you want to be able to store in the name variable
    // char first_name[20];
    // printf("Please enter your first_name: ");
    // **** do not need & sign in front of variable this time in scanf when dealing with a string
    // **** warning scanf only grabs characters up to the first space
    // scanf("%s", first_name);

    // can use fgets(variabie you want to store string, max number of characters, stdin) to take in multiple words instead instead
    char first_and_last_name[20];
    printf("Please enter your first and last name: ");
    fgets(first_and_last_name, 20, stdin);
    printf("Your name is %s", first_and_last_name);


    return 0;
}

// compile in visual studio code but execute in separate power shell terminal