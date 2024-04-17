#include <stdio.h>

int linear_search(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 10, 9, 2, 8};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int value = 8;
    int result = linear_search(arr, sizeArr, value);
    
    if(result == -1)
    {
        printf("not found");
    }
    else
    {
        printf("found, index %d, value %d", result, arr[result]);
    }
}