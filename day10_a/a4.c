#include <stdio.h>

int reverse(int arr[], int start, int end) 
{
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int rotateArr(int arr[], int n, int k) 
{
    if (arr == NULL || n <= 0 || k <= 0 || k > n) 
        printf("Error: Invalid input.\n");
        
    for (int i = 0; i < n; i += k) 
    {
        int end = (i + k - 1 < n) ? (i + k - 1) : (n - 1);
        reverse(arr, i, end);
    }
}


int array(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) 
    {
        printf("Error: Invalid value for k. It must be a positive integer less than or equal to the array size.\n");
        return 1;  
    }

    rotateArr(arr, n, k);

 
    printf("Array after rotating every %d elements:\n", k);
    array(arr, n);

    return 0;
}