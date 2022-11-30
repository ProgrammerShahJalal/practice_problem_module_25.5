// You are given 3 integers a, b and c . Now print the sum of three numbers using the concept of pointer in C.
// Sample Input :
// 10 20 30
// Sample Output :
// 60

#include <stdio.h>
int main()
{
    int a, b, c;
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    scanf("%d%d%d", p, q, r);
    printf("%d\n", *p + *q + *r);
    return 0;
}