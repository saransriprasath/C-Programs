#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d", &N);

    N = abs(N);

    // Special case if N is 0
    if (N == 0) {
        printf("0 0");
        return 0;
    }

    int max_digit = 0;
    int min_digit = 9;

    while (N > 0) {
        int digit = N % 10;

        if (digit > max_digit)
            max_digit = digit;
        if (digit < min_digit)
            min_digit = digit;

        N /= 10;
    }

    printf("%d %d", max_digit, min_digit);

    return 0;
}
