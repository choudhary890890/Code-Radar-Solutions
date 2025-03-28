#include <stdio.h>

int main() {
    int n, val;
    scanf("%d", &n);
    
    int arr[n];  // Array to store input numbers
    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }

    int rem[n];  // Array to store unique numbers
    int c = 0;   // Counter for unique numbers
    int unique;

    // Find unique elements and store them in rem[]
    for (int r = 0; r < n; r++) {
        unique = 1;
        for (int t = 0; t < c; t++) {  // Check if arr[r] is already in rem[]
            if (rem[t] == arr[r]) {
                unique = 0;
                break;
            }
        }
        if (unique) {  // If unique, add to rem[]
            rem[c] = arr[r];
            c++;
        }
    }

    // Count and print frequency of each unique element
    for (int i = 0; i < c; i++) {
        val = 0;
        for (int j = 0; j < n; j++) {
            if (rem[i] == arr[j]) {
                val++;
            }
        }
        printf("%d %d\n", rem[i], val);
    }

    return 0;
}
    