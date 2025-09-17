                                             ..................................................................................................................................#include<stdio.h>
#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the triangle
    for(i = 1; i <= rows; i++) {
        // Print stars for each row
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
