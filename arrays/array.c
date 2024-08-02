// Arrays in C99

#include <stdio.h>

// Function to print elements of an integer array
void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]); // Print each element followed by a space
    }
    printf("\n"); // Print a new line after the array
}

int main(void)
{
    // Declare and initialize a one-dimensional array with 5 elements
    int one_dimensional_array[] = {1, 2, 3, 4, 5};

    // Declare and initialize a two-dimensional array (2x5 matrix)
    // This array contains 2 rows and 5 columns, initialized with values
    int two_dimensional_array[][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

    // Calculate the number of elements in the one-dimensional array
    // Total size of the array divided by the size of one element gives the count
    int size = sizeof(one_dimensional_array) / sizeof(one_dimensional_array[0]);

    // Prompt the user to enter a size for the variable-length array (VLA)
    int vla_size = 0;
    printf("Enter a size of VLA: ");
    scanf("%d", &vla_size);

    // Declare a variable-length array with a size provided by the user
    // The size of this array is determined at runtime
    int vla_array[vla_size];

    // Initialize each element of the VLA to 1
    for (int i = 0; i < vla_size; i++)
    {
        vla_array[i] = 1;
    }

    print_array(vla_array, vla_size);
    print_array(one_dimensional_array, size);
    return 0;
}