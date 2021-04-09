#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <stack>
#include <string.h>
#include <map>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 0)
    {
        printf("1\n");
    }
    else if(n == 1)
    {
        printf("1\n");
    }
    else if(n == 2)
    {
        printf("2\n");
    }
    else
    {
        long long a[1000001];
        a[1] = 1;
        a[2] = 2;
        for(int i=3;i<=n;i++)
        {
            a[i] = a[i-1] + a[i-2];
        }
        printf("%lld\n", a[n]);
    }
    return 0;
}
