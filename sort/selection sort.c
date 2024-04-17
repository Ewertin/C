#include <stdio.h>

#define SIZE 10

void selection_sort(int arr[SIZE])
{
    int minValPos;
    
    for(int i = 0; i < SIZE - 1; i++)
    {
        minValPos = i;
        
        for(int j = i + 1 ; j < SIZE; j++)
        {
            if(arr[minValPos] > arr[j])
            {
                minValPos = j;
            }
        }
        
        int temp = arr[minValPos];
        arr[minValPos] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[SIZE] = {32, 45, 18, 7, 1, 16, 40, 29, 34, 12};
    
    selection_sort(arr);
    
    for(int k = 0; k < SIZE; k++)
    {
        printf("%d\n",arr[k]);
    }
}