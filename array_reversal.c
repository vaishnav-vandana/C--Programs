/* EXERCISE : Array reversal */

// You have to write a C program that will reverse an array of integers . For that purpose , create the function that will take array as an argument and reverse an array .
// Before Reversal : 1, 4, 5, 7, 8
// After Reversal : 8, 7, 5, 4, 1

#include <stdio.h>

void arrayRev(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void arrayPrint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 4, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Reversal : ");
    arrayPrint(arr, n);

    arrayRev(arr, n);

    printf("After Reversal : ");
    arrayPrint(arr, n);

    return 0;
}

/*
OUTPUT :
Before Reversal : 14578
After Reversal : 87541
*/