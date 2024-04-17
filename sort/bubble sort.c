#include <stdio.h>

#define SIZE 10

void bubble_sort(int arr[SIZE])
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[SIZE] = {32, 45, 18, 7, 1, 16, 40, 29, 34, 12};
    bubble_sort(arr);
    
    for (int k = 0; k < SIZE; k++)
    {
        printf("%d\n", arr[k]);
    }
}