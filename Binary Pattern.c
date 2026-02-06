#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int start = 1;  // starting digit for the first row

    for (int i = N; i >= 1; i--) {
        int val = start;
        for (int j = 1; j <= i; j++) {
            printf("%d", val);
            val = 1 - val;   
        }
        printf("\n");
        start = 1 - start; 
    }

    return 0;
}
