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
    int n;
    scanf("%d", &n);
    // recusAdd(n);
    printf("%d\n", (n*(n+1))/2);
    return 0;
}
// int recusAdd(int a) 
// {  
//     int sum=0;
//     if(a == 0)  
//         return 0; 
//     else   
//     {  
//         printf("%d ", a);
//         sum+=a+recusAdd(a-1);
//     }
//     printf("%d\n", sum);  
// } 