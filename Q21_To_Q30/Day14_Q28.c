/* Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long for large results

    printf("enter the value of n :");
    scanf("%d", &n);
    // Multiply even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}
