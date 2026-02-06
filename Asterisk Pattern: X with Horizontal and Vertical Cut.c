#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int mid=(n/2)+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==j)||(i+j)==(n+1)){
                printf("* ");
            }
            else if(i==mid||j==mid)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
        
    }
    return 0;
}
