#include <stdio.h>
#include <math.h>

void useri(void);
float calc(float one, char sign, float two);
void disp(float one, char sign, float two, float display); // Corrected prototype order

int main() {
    float display;
    float one, two;
    char sign, option; // Declared 'option' here

    printf("\n");
    // Initial separator
    for(int i = 1; i <= 35; i++) {
        printf("=");
    }
    printf("\n");

    do {
        useri(); // Display instructions and prompt for calculation
        scanf("%f %c %f", &one, &sign, &two); // Read calculation input

        display = calc(one, sign, two); // Perform calculation
        disp(one, sign, two, display); // Display result

        // Prompt for continuation
        printf("\n  Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &option); // Read user's choice, note the space before %c
                               // to consume any leftover newline characters
    } while (option == 'y' || option == 'Y'); // Loop continues if 'y' or 'Y' is entered

    // Final display after the loop
    printf("\n");
    for(int i = 1; i <= 35; i++) {
        printf("=");
    }
    printf("\n");
    printf("    www.parvejhusentalukder.com\n");
    for(int i = 1; i <= 35; i++) {
        printf("=");
    }
    printf("\n\n");

    return 0;
}

void useri(void) {
    printf("\n");
    printf("  "); // Standard ASCII space
    for(int i = 1; i <= 3; i++) {
        printf("+- -+");
    }
    printf("\n");

    printf("\t<<<vSIM CALC>>>\t\n");
    printf("\t");
    for(int i = 1; i <= 3; i++) {
        printf("+- -+");
    }
    printf("\n  +----- INSTRUCTIONS -----+\n"); // Standard ASCII chars
    printf("  |                        |\n"); // Standard ASCII chars and spaces
    printf("  | Use operators:         |\n"); // Standard ASCII chars and spaces
    printf("  | +  -  * / only         |\n"); // Standard ASCII chars and spaces
    printf("  |                        |\n"); // Standard ASCII chars and spaces
    printf("  |                        |\n"); // Standard ASCII chars and spaces
    printf("  | Format:                |\n"); // Standard ASCII chars and spaces
    printf("  | 10 + 2 <Enter>         |\n"); // Standard ASCII chars and spaces
    printf("  |                        |\n"); // Standard ASCII chars and spaces
    printf("  | Note: Division by      |\n"); // Standard ASCII chars and spaces
    printf("  | zero not allowed       |\n"); // Standard ASCII chars and spaces
    printf("  | * To continue enter y/Y|\n"); // Standard ASCII chars and spaces
    printf("  | * To stop enter n      |\n"); // Standard ASCII chars and spaces
    printf("  +------------------------+\n"); // Standard ASCII chars
    printf("\n  >> Enter calculation: ");
}

float calc(float one, char sign, float two) {
    if (sign == '+')
    {
        return one + two;
    } else if (sign == '-') {
        return one - two;
    } else if (sign == '*') {
        return one * two;
    } else if (sign == '/') {
        if (two == 0 ) {
            return 404; // Error code for division by zero
        } else {
            return one / two;
        }
    } else {
        return 500; // Error code for unrecognized operator
    }
}

void disp(float one, char sign, float two, float display) {
    printf("\n  +--- RESULT ---------+\n"); // Standard ASCII chars

    if (display == 404) { // Check for division by zero error
        printf("  |                    |\n"); // Standard ASCII chars and spaces
        printf("  | ERROR:             |\n"); // Standard ASCII chars and spaces
        printf("  | Can't Be           |\n"); // Standard ASCII chars and spaces
        printf("  | Divided by         |\n"); // Standard ASCII chars and spaces
        printf("  | Zero               |\n"); // Standard ASCII chars and spaces
        printf("  |                    |\n"); // Standard ASCII chars and spaces
    } else if (display == 500) { // Check for unrecognized operator error
        printf("  |                    |\n"); // Standard ASCII chars and spaces
        printf("  | ERROR:             |\n"); // Standard ASCII chars and spaces
        printf("  | Unrecognized       |\n"); // Standard ASCII chars and spaces
        printf("  | character          |\n"); // Standard ASCII chars and spaces
        printf("  | detected           |\n"); // Standard ASCII chars and spaces
        printf("  |                    |\n"); // Standard ASCII chars and spaces
    } else {
        // Displaying the actual answer
        printf("  | Answer:            |\n"); // Standard ASCII chars and spaces
        printf("  | %.0f %c %.0f = %.1f |\n", one, sign, two, display); // Standard ASCII chars and spaces
        printf("  |                    |\n"); // Standard ASCII chars and spaces
    }
    printf("  +--------------------+\n"); // Standard ASCII chars
}
