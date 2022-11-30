// You are given a string S of small letters , Now calculate the cost of the string and tell that whether the cost of
// the string is a power of two or not.
// In this problem cost means the sum of the alphabetic order of the given string. Alphabetic order means
// a = 1 , b = 2 , c = 3 .......... z = 26
// And, power of two is a number of the form 2^n (2 to the power n) where n is an integer.
// Now ,If the cost is a power of two print YES with cost (in this format 2^n) otherwise print NO.
// Implement it using function.

// Sample Input 1:
// abc
// Sample Output 1:
// NO

// Sample Input 2:
// bbca
// Sample Output 2:
// YES
// cost = 2^3

#include <stdio.h>
#include <string.h>
#include <math.h>

int powerOfTwo(int n)
    {
        if(n==0) { return 0; }
        while(n != 1)
        {
            n = n/2;
            if(n%2 != 0 && n != 1){ return 0; }
        }
        return 1;
    }
int main()
{
    int length, cost;
    double result;
    char s[50];
    fgets(s, sizeof(s), stdin);

    length = strlen(s) - 1;

    for (int i = 0; i < length; i++)
    {
        s[i] = s[i] - 96;
        cost += s[i];
    }
    if (powerOfTwo(cost)!=1)
        printf("NO\n");
    else 
    {
        result = (log(cost) / log(2));
        printf("YES\n");
        printf("cost=2^%.0lf\n", result);
    }
}
