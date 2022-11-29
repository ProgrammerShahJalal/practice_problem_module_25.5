// You are given a positive integer n. The second line will contain n positive integers. The third line will contain a value k.
// Now print the total count of strictly less and strictly greater value from k. Implement it using function.
// Note – In the given input, there may exist duplicate value.

// Sample Input :
// 7
// 1 2 5 5 9 2 3 5

// Sample Output :
// 5

#include <stdio.h>

int findOthers(int x, int ara[100]);
int main()
{
    int n;
    int ara[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    findOthers(n, ara);
    return 0;
}

int findOthers(int x, int ara[100])
{
    int k, count = 0;

    scanf("%d", &k);
    for (int i = 0; i < x; i++)
    {
        if (ara[i] != k)
            count++;
    }
    printf("%d\n", count);
}