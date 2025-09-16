/* Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, power, middlePart, swappedNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10; // extract last digit
    digits = (int)log10(num); // total digits - 1
    power = pow(10, digits); // 10^(digits)

    firstDigit = num / power; // extract first digit
    middlePart = (num % power) / 10; // remove first and last digits

    // If number has only 1 digit, no swap needed
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Form the swapped number
    swappedNum = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);
    return 0;
}
