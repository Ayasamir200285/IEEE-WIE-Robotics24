
#include <stdio.h>

//1
void callByValue(int x) {
    printf("Inside callByValue(): x = %d\n", x);
    x = 50;
    printf("Inside callByValue(): x = %d\n", x);
}


void callByReference(int *x) {
    printf("Inside callByReference(): *x = %d\n", *x);
    *x = 50;
    printf("Inside callByReference(): *x = %d\n", *x);
}


//2


int iterativeBinarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {

    //1
    /*int a = 10;
    int b = 10;

    printf("Before callByValue(): a = %d\n", a);
    callByValue(a);
    printf("After callByValue(): a = %d\n", a);

    printf("\nBefore callByReference(): b = %d\n", b);
    callByReference(&b);
    printf("After callByReference(): b = %d\n", b);*/

    //2

       int arr[] = {2, 4, 7, 10, 15, 20, 23, 27, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int result = iterativeBinarySearch(arr, size, target);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target not found.\n");
    }



    return 0;
}
