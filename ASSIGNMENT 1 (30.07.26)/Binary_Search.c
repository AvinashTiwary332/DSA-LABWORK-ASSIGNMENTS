#include <stdio.h>
int binarySearch(int list[], int size, int product_id) {
    int low = 0;
    int high = size - 1;
while (low <= high) {
        int mid = low + (high - low) / 2;
if (list[mid] == product_id) {
            return 1; 
        }
         else if (list[mid] < product_id) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return 0;
}
int main() {
     int products[] = {2, 8, 9, 16, 18, 26, 38, 48, 51, 90};
    int size = sizeof(products) / sizeof(products[0]);
    int search_id;
printf("Enter Product ID to search: ");
    if (scanf("%d", &search_id) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
if (binarySearch(products, size, search_id) == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}