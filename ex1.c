/******************
Name: Gal Neeman
ID: 331981365
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    // What bit
    printf("What bit: \n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */

    printf("Please enter a number: \n");
    int number0;
    scanf("%d", &number0);

    printf("Please enter a position: \n");
    int position0;
    scanf("%d", &position0);

    //by doing number>>position we shift the wanted bit to the right and by doing &1 we take only the most right bit
    int bitInPosition0 = (number0 >> position0) & 1;
    printf("The bit in position %d of number %d is: %d\n", position0, number0, bitInPosition0);

    // Set bit
    printf("\nSet bit: \n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    printf("Please enter a number: \n");
    int number1;
    scanf("%d", &number1);

    printf("Please enter a position: \n");
    int position1;
    scanf("%d", &position1);
    int bitInPosition1 = (number1 >> position1) & 1;
    //sign converts bit=1 to -1 and bit=0 to 1 so we know if we need to subtract or add to the number
    int sign0 = -2 * bitInPosition1 + 1;

    //we add/sub 2 to the power of the position to get the wanted result dependent on the sign
    int toggledBit0 = number1 + sign0 * (1 << position1);

    printf("Number with bit %d set to 1: %d \n", position1, toggledBit0 | number1);
    printf("Number with bit %d set to 0: %d \n", position1, toggledBit0 & number1);


    // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */

    printf("Please enter a number: \n");
    int number2;
    scanf("%d", &number2);

    printf("Please enter a position: \n");
    int position2;
    scanf("%d", &position2);
    int bitInPosition2 = (number2 >> position2) & 1;
    int sign1 = -2 * bitInPosition2 + 1;

    int toggledBit1 = number2 + sign1 * (1 << position2);
    printf("Number with bit %d toggled: %d \n", position2, toggledBit1);


    // Even - Odd
    printf("\nEven - Odd: \n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    int number3;
    printf("Please enter a number: \n");
    scanf("%d", &number3);

    //this line takes the LSB and if it's 1 the output is 0 and if it's 0 the output is 1
    int isEven = 1 - (number3 & 1);
    printf("%d\n", isEven);


    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */

    int octNum0;
    int octNum1;
    printf("Please enter the first number (octal):\n");
    scanf("%o", &octNum0);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &octNum1);
    int sum = octNum0 + octNum1;
    printf("The sum in hexadecimal: %X\n", sum);
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);

    printf("Bye!\n");

    return 0;
}
