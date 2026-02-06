#include <stdio.h>
#include <math.h>

int main() {
    int N, temp, digit, digits = 0;
    long long sum = 0;

    scanf("%d", &N);

    temp = N;

    // Count number of digits
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = N;

    // Calculate Armstrong sum
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Special case for N = 0
    if (N == 0) {
        sum = 0;
    }

    if (sum == N)
        printf("true");
    else
        printf("false");

    return 0;
}
