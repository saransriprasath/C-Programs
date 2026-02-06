#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int base, exp;
    scanf("%d%d",&base,&exp);
    
    int result=1;
    for (int i=0; i<exp; i++){
        result*=base;
    }
    printf("%d",result);
    return 0;
}
