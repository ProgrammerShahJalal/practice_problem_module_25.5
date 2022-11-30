// Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
// of size N . And the next line will contain k . Now find the k-th largest and kth-smallest element from the array.
// Implement it using function. And try to implement it using 3 functions .1st one is for sorting , second one for
// finding k-th largest element and third one for finding the kth- smallest element.
// See the sample output for more clarification.
// Note – 1<=k<=N

// Sample Input :
// 9
// 2 17 1 1 3 2 5 19 5 4
// 4
// Sample Output :
// 4th largest element = 5

// 4th smallest element = 2

#include <stdio.h>
sortingAndFinding(int n, int arr[100]);
int main()
{
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortingAndFinding(n, arr);
    return 0;
}
/* sorting and findings*/
sortingAndFinding(int n, int arr[100])
{
    int temp = 0, k;
    scanf("%d", &k);
/* Desending order ==> largest to smallest */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("%dth largest element=%d\n", k, arr[k - 1]);
/* Asending order ==> smallest to largest*/
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%dth smallest element=%d\n", k, arr[k - 1]);
}