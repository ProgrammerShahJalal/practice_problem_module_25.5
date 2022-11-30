// You are given an integer n . Now print the sum of first n natural numbers.
// For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) . Implement it using recursion.
// Sample Input:
// 5
// Sample Output:
// 15

#include <stdio.h>
int recusAdd(int n);
int main()
{
    int n, sum=0;
    scanf("%d", &n);
    sum=recusAdd(n);
    printf("%d\n", sum);
    return 0;
}
int recusAdd(int a)
{
    if (a == 0)
        return a;
    else
    {
        return a + recusAdd(a - 1);
    }
}