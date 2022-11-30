// You are given an integer n . Now print n to 1 . Implement it using recursion.
// Sample Input :
// 4 
// Sample Output :
// 4 3 2 1

#include <stdio.h>
int recursionfunc (int a) 
{  
    if(a == 0)  
        return 0; 
    else   
    {  
        printf("%d ",a);  
        return recursionfunc(a-1);
    }  
} 
int main()
{
    int n;
    scanf("%d", &n);
   recursionfunc(n);

   return 0;
}
