#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int spaces, innerSpaces;


    for (int i = 0; i < N; i++) {
        spaces = N - i - 1;
        innerSpaces = 2 * i - 1;


        for (int s = 0; s < spaces; s++)
            printf(" ");


        printf("*");


        if (innerSpaces > 0) {
            for (int s = 0; s < innerSpaces; s++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    for (int i = N - 2; i >= 0; i--) {
        spaces = N - i - 1;
        innerSpaces = 2 * i - 1;

        for (int s = 0; s < spaces; s++)
            printf(" ");

        printf("*");

        if (innerSpaces > 0) {
            for (int s = 0; s < innerSpaces; s++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
