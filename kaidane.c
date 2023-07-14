#include <stdio.h>

int maxSubarraySum(int Arr[], int N) {
    int max_sum = Arr[0];  // Initialize max_sum as the first element
    int current_sum = Arr[0];  // Initialize current_sum as the first element

    for (int i = 1; i < N; i++) {
        current_sum = (Arr[i] > current_sum + Arr[i]) ? Arr[i] : current_sum + Arr[i];
        max_sum = (max_sum > current_sum) ? max_sum : current_sum;
    }

    return max_sum;
}

int main() {
    int N = 5;
    int Arr[] = {1, 2, 3, -2, 5};
    printf("%d\n", maxSubarraySum(Arr, N));
    
    return 0;
}
