#include <stdio.h>

// Function to check if two numbers are consecutive Fibonacci numbers
int areConsecutiveFibonacci(int n1, int n2) {
    int a = 0, b = 1;   // starting Fibonacci numbers

    // Loop until we reach or exceed the larger of the two inputs
    while (b <= (n1 > n2 ? n1 : n2)) {
        // Check if current consecutive pair matches the inputs
        if ((a == n1 && b == n2) || (a == n2 && b == n1)) {
            return 1;  // they are consecutive Fibonacci numbers
        }
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;  // not consecutive
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    if (areConsecutiveFibonacci(n1, n2)) {
        printf("%d and %d are consecutive Fibonacci numbers.\n", n1, n2);
    } else {
        printf("%d and %d are NOT consecutive Fibonacci numbers.\n", n1, n2);
    }

    return 0;
}
