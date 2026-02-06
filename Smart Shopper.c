#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c1,q1,c2,q2,c3,q3,bg;
    double total_bt, total_at;
    
    scanf("%d %d", &c1, &q1);
    scanf("%d %d", &c2, &q2);
    scanf("%d %d", &c3, &q3);
    scanf("%d", &bg);
    total_bt = (c1 * q1) + (c2 * q2) + (c3 * q3);
    total_at = total_bt * 1.10;


    printf("Total (Before Tax): %.2lf\n", total_bt);
    printf("Total (After Tax): %.2lf\n", total_at);

    if (total_at <= bg) {
        printf("Within Budget");
    } else {
        printf("Over Budget");
    }
    return 0;
}
