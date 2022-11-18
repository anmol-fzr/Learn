//              Problem
// Write a program in C to display the pattern like a diamond.

#include <stdio.h>

void main(){
    int rows;

    printf("Enter the rows of rowsfor your Pyramid: "); 
    scanf("%d", &rows);

    for (int i = 1; i <rows; i++) {
        for (int j = rows-i; j >0; j--) printf(" ");
        for (int k = 0; k < 2*i-1; k++) printf("*");
        printf("\n");
    }
    for (int i = rows; i>0; i--) {
        for (int j = rows-i; j >0; j--) printf(" ");
        for (int k = 0; k < 2*i-1; k++) printf("*");
        printf("\n");
    }
}