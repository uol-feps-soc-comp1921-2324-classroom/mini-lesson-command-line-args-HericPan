#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;
    
    // Check the number of arguments is 2, otherwise exit program
    if (argc != 3) {
        printf("Invalid inputs: the number of arguments should be 2. \n");
        return -1;
    }

    // Check the arguments can be translated into integers
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    if (num1 < 1 || num2 < 1) {
        printf("Invalid inputs: the input numbers should be integer. \n");
        return -1;
    }

    // // Prompt the user for input
    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
