#include <stdio.h>

void swap(float* xp, float* yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(float arr[], int n)
{
int i, j;
for (i = 0; i < n - 1; i++)

// Last i elements are already in place
for (j = 0; j < n - i - 1; j++)
    if (arr[j] > arr[j + 1])
        swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(float arr[], int size)
{
int i;
for (i = 0; i < size; i++)
    printf("%.1f \n", arr[i]);
}

// Driver program to test above functions
int main()
{
float arr[] = { 5, 6.7, 9, 2, 4.6, 79, 0 };
int n = sizeof(arr) / sizeof(arr[0]);
bubbleSort(arr, n);
printf("Sorted array: \n");
printArray(arr, n);
return 0;
}