#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int num;
    
    scanf("%d", &num);
    
    if (isArmstrong(num))
        printf("%d" , num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if the result is equal to the original number
    if (result == num)
        return 1; // number is an Armstrong number
    else
        return 0; // number is not an Armstrong number
}
