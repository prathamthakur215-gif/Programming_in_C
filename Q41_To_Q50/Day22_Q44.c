/* Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate series sum
    for (i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;   // 1, 3, 5, 7 ...
        int denominator = 2 * i;     // 2, 4, 6, 8 ...
        sum += (float)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
