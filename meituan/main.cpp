#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define INF 0x3f3f3f

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j;
    int a[11][11][11], mapp[11][11][11];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 && j==0)
            {
                mapp[i][j] = a[i][j];
            }
            else if(i==0)
            {
                mapp[i][j] = mapp[i][j-1] + a[i][j];
            }
            else if(j==0)
            {
                mapp[i][j] = a[i][j] + mapp[i-1][j];
            }
            else
            {
                mapp[i][j] = min(mapp[i-1][j], mapp[i][j-1]) + a[i][j];
            }
        }
    }
    printf("%d\n", mapp[n-1][m-1]);
    return 0;
}
