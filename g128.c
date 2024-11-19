/*Vasu is fascinated by the concept of factorials. He wants to calculate the factorial of a given number N and then subtract N from the resulting factorial value.



Help Vasu calculate the result using pointers given the positive integer N.



Example



Input:

5

Output:

115

Explanation:

The factorial of integer 5 is 120. When subtracting the given number from the factorial result, we get 120 - 5 = 115.

Input format :
The input consists of an integer N, representing the number.

Output format :
The output displays an integer, representing the resultant value after subtracting the factorial result with the number N.*/

#include <stdio.h>

int main() {
    int number;
    int *ptr = &number;
    int n;
    
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("%d", factorial - n);

    return 0;
}
