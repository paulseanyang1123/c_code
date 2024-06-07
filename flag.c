#include <stdio.h>
//int defaultHeight = 5;
void printTriangleFlag(int height) {
    for (int i = 1; i <= height; i++) {
        //height = defaultHeight;
        // Print spaces for alignment
        //for (int j = height - i; j > 0; j--) {
           // printf(" ");
       // }
        // Print the asterisks
       /* for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }*/

        // Move to the next line
        for (int k = 1; k < i+1; k++) {
            printf("* ");

        }
        printf("\n");
    }
    for (int k = 1; k < height; k++) {
        printf("|\n");
        //printf("\n");
    }
    
}

int main(){
    int height;

    // Ask the user for the height of the triangle flag
    printf("Enter the height of the triangle flag: ");
    scanf("%d", &height);

    // Print the triangle flag
    printTriangleFlag(height);

    return 0;
}