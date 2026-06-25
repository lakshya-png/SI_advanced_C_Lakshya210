#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}