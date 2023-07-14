#include <stdio.h>
#include <stdlib.h>

int* leader(int arr[], int n, int* resultCount) {
    int* leaders = malloc(n * sizeof(int)); // Allocate memory for the leaders array
    int max = arr[n - 1]; // Rightmost element is always a leader
    leaders[0] = max;
    int count = 1;

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        // If current element is greater than the current max, it is a leader
        if (arr[i] >= max) {
            leaders[count] = arr[i];
            max = arr[i]; // Update the current max
            count++;
        }
    }

    // Reverse the leaders array to get the correct order
    for (int i = 0; i < count / 2; i++) {
        int temp = leaders[i];
        leaders[i] = leaders[count - i - 1];
        leaders[count - i - 1] = temp;
    }

    *resultCount = count;
    return leaders;
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int* arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the elements of the array
    }

    int resultCount;
    int* result = leader(arr, n, &resultCount); // Find the leaders in the array

    // Print the leaders
    for (int i = 0; i < resultCount; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(arr);
    free(result);
    return 0;
}
