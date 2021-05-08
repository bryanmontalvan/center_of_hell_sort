#include <stdio.h>
#include <stdlib.h>

// Defined size of Array
#define SIZE 5

void center_of_hell_sort(int arr[], int center);
void sort(int arr[], int center, int *step_counter);
int is_sorted(int arr[]);
void print_array(int arr[]);

int main(void) {

    // Declaration
    int arr[SIZE] = { 2, 4, 1, 5, 3 };
    int center = SIZE / 2;

    // Print array before sort
    print_array(arr);
    
    // Sort Array
    center_of_hell_sort(arr, center);
    return 0;
}

void center_of_hell_sort(int arr[], int center) {
    int step_counter = 0;
    while (is_sorted(arr) == 0) {
        sort(arr, center, &step_counter);
    }
    printf("\n");
    step_counter++;
    printf("Sorted in %d steps\n", step_counter);
    print_array(arr);
    exit(1);
}


void sort(int arr[], int center, int *step_counter) {
    for (int i = 0; i < SIZE; i++) {
        // Swap elements
        int temp = arr[center];
        arr[center] = arr[i];
        arr[i] = temp;
        if (is_sorted(arr)) {
            return;
        }
        print_array(arr);
        *step_counter = *step_counter + 1;
    }
}

// Checks if array is sorted
int is_sorted(int arr[]) {
    for (int i = 1; i < SIZE; i++)
        if (arr[i] < arr[i - 1])
            return 0;
    return 1;
}

// Prints array
void print_array(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
