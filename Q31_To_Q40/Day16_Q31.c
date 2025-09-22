/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
