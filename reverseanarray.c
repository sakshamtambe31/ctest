#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    int size;

    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
