#include <stdio.h>

#define pi 3.14

int main()
{
    //(1)
/*int x;
float y;
char letter;

// Prompt the user to enter a value for x
printf("please enter value for variable x :");

// Read the value of x entered by the user
scanf("%d",&x);

// Print the value of x
printf("\n value for variable x is :%d\n",x);

// Prompt the user to enter a value for y
printf("please enter value for variable y :");

// Read the value of y entered by the user
scanf("%f",&y);

// Print the value of y
printf(" value for variable y is :%f\n",y);

// Prompt the user to enter a letter
printf("please enter letter :");

// Read the letter entered by the user with a space before the %c to skip any whitespace characters
scanf(" %c",&letter);

// Print the letter
printf("the letter is : %c\n",letter);*/

    //(2)

    /*int x;
    int y;

// Prompt the user to enter the first number
printf("enter your first number : ");

// Read the value of the first number entered by the user
scanf("%d",&x);

// Prompt the user to enter the second number
printf("\n enter your second number : ");

// Read the value of the second number entered by the user
scanf("%d",&y);

// Calculate the sum of x and y
int addition = x + y;
printf("\n x + y=%d", addition);

// Calculate the difference between x and y
int subtraction = x - y;
printf("\n x - y=%d", subtraction);

// Calculate the product of x and y
int multiplication = x * y;
printf("\n x * y=%d", multiplication);

// Calculate the quotient of x and y
float division = (float)x / y;
printf("\n x / y=%f", division);*/


    //(3)

   /* int x;

// Prompt the user to enter a value for x
printf("enter value for x : ");

// Read the value of x entered by the user
scanf("%d",&x);

// Check if the number is negative
if (x < 0) {
    printf("\n the number is negative ");
}
// Check if the number is positive
else if (x > 0) {
    printf("\n the number is positive ");
}
// If the number is not negative or positive, it must be zero
else {
    printf("\n the number is zero ");
}*/

    //(4)

    /*int A;
    int B;

// Prompt the user to enter a value for A
printf("enter value for A : ");

// Read the value of A entered by the user
scanf("%d",&A);

// Prompt the user to enter a value for B
printf("\n enter value for B : ");

// Read the value of B entered by the user
scanf("%d",&B);

// Use a for loop to print all integers from A to B (inclusive)
for(int i=A;i<=B;i++) {
    printf("%d\n",i);
}*/



    //(5)

    /*int x;

// Prompt the user to enter a value for x
printf("enter value for x : ");

// Read the value of x entered by the user
scanf("%d",&x);

// Initialize variables to calculate the factorial of x
int i = x;
int fact = 1;

// Calculate the factorial of x using a while loop
while (i >= 1) {
    fact *= i;
    i--;
}

// Print the calculated factorial of x
printf("\n %d", fact);*/

    //(6)

   /* int radius;

// Prompt the user to enter the radius
printf("enter radius : ");

// Read the radius entered by the user
scanf("%d",&radius);

// Calculate the circumference of the circle using the formula:
float circumference=2*pi*radius;

// Print the calculated circumference
printf("\n circumference = %f",circumference);*/

    //(7)

   /*int number, i = 2;
    int isPrime = 1; // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is less than 2
    if (number < 2) {
        isPrime = 0; // Not a prime number
    } else {
        while (i * i <= number) {
            if (number % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }*/



    return 0;
}
