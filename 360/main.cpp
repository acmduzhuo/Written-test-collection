#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define INF 0x3f3f3f

using namespace std;

int main()
{
    int n, m;
    int a[100001];
    int b[100001];
    int num;
    scanf("%d %d",&n, &m);
    for(int i=1;i<=n;i++)
    {
        a[i] = i;
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=1;i<=m;i++)
    {
        if(b[i]==1&&b[i+1]==2&&b[i+2]==)
    }
    if(num == 1)
        {
            int t = a[1];
            for(int k=1;k<n;k++)
            {
                a[k] = a[k+1];
            }
            a[n] = t;
        }
        else if(num == 2)
        {
            for(int k=1;k<=n;k+=2)
            {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    for(int i=1;i<=n;i++)
    {
        printf("%d%c", a[i], (i==n)?'\n':' ');
    }
    return 0;
}
