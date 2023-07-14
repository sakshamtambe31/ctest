#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int n, fact=1;
    scanf("%d", &n) ;
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    printf("%d", fact) ;
    return 0;
}
