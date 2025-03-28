#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);  // Sorting the array

    int maxSeq = 1, count = 1;

    for (int i = 1; i < n; i++) {  // Start from index 1 to avoid out-of-bounds access
        if (arr[i] == arr[i - 1] + 1) {  // Check consecutive sequence
            count++;
            if (count > maxSeq) {
                maxSeq = count;
            }
        } else if (arr[i] != arr[i - 1]) {  // Reset count if it's not a duplicate
            count = 1;
        }
    }

    printf("%d\n", maxSeq);  // Print the longest consecutive sequence length
    return 0;
}