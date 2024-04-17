#include <stdio.h>

void merge(int arr[], int left, int middle, int right)
{
    // Calculate the size of the left subarray
    int sizeLeft = middle - left + 1;
    // Calculate the size of the right subarray
    int sizeRight = right - middle;
    
    // Declare temporary arrays
    int leftArr[sizeLeft], rightArr[sizeRight];
    
    // Fill the left temporary array with the elements of the left subarray
    for (int i = 0; i < sizeLeft; i++)
        leftArr[i] = arr[left + i];
        
    // Fill the right temporary array with the elements of the right subarray
    for (int j = 0; j < sizeRight; j++)
        rightArr[j] = arr[middle + 1 + j];

    // Initialize the variables
    int i = 0;
    int j = 0;
    int k = left;

    // Repeat until the index of the current element is lower than the array size
    while (i < sizeLeft && j < sizeRight) 
    {
        // Place the smaller number between the two subarrays into the array
        if (leftArr[i] <= rightArr[j]) 
        {
            arr[k] = leftArr[i];
            // The number was used; move to the next
            i++;
        } 
        else 
        {
            arr[k] = rightArr[j];
            // The number was used; move to the next
            j++;
        }
        // The number was placed; move to the next
        k++;
    }

    // If there are remaining elements, write them into the array
    while (i < sizeLeft) 
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < sizeRight) 
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// arr, 0(left), arrSize - 1(right)
void mergeSort(int arr[], int left, int right)
{
    if (left < right) 
    {
        // Calculate the middle index
        int middle = left + (right - left) / 2;
        // Sort the left part
        mergeSort(arr, left, middle);
        // Sort the right part, adding 1 to avoid using the same element as the sorted left part
        mergeSort(arr, middle + 1, right);
        // Merge the sorted subarrays
        merge(arr, left, middle, right);
    }
}

int main() 
{
    // Test array
    int arr[] = {21, 43, 35, 127, 92, 45, 131};
    
    // Calculate the number of elements by dividing the total memory by the memory used by 1 element
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    // Call mergeSort with array, left, and right as inputs
    mergeSort(arr, 0, arrSize - 1);

    // Print each element of the array
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\n", arr[i]);
    }
}