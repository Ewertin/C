#include <stdio.h>

//needs a sorted list
int binary_search(int arr[], int left, int right, int target)
{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target)
        {
            return mid;
        }
        
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int value = 8;
    int result = binary_search(arr, 0, sizeArr - 1, value);
    
    if(result == -1)
    {
        printf("not found");
    }
    else
    {
        printf("found, index %d, value %d", result, arr[result]);
    }
}