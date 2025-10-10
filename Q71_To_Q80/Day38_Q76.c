/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n;

    // Input size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    int isSymmetric = 1; // assume true
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // false
                break;
            }
        }
        if(!isSymmetric) break;
    }

    // Output result
    if(isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
