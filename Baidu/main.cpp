#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stack>
#include <math.h>

using namespace std;

struct node{
    int value;
    int index;
    int sate;
}num[1009];
int want[1009];

void f(int want[], int l, int r)
{
    int i = l;
    int j = r;
    int key = want[l];
    while(i<j)
    {
        while(i<j && want[j]>key)
        {
            j--;
        }
        want[i] = want[j];
        while(i<j && want[i]<key)
        {
            i++;
        }
        want[j] = want[i];
    }
    want[i] = key;
    //printf("!!\n");
    if(l<r)
    {
        f(want, l, i-1);
        f(want, i+1, r);
    }
}
int main()
{
    int t;
    int n, m;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d", &want[i]);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d", &num[i].value);
            num[i].index = i;
            num[i].sate = 1;
        }
        f(num, 0, n-1);
        for(int i=0;i<n;i++)
        {
            printf("%d\n", want[i]);
        }

    }
    return 0;
//        int temp;
//        for(int i=1;i<m;i++)
//        {
//            for(int j=i+1;j<=m;j++)
//            {
//                if(num[i].value > num[j].value)
//                {
//                    temp = num[i].value;
//                    num[i].value = num[j].value;
//                    num[j].value = temp;
//                }
//            }
//        }
//
//
//        for(int i=1;i<=n;i++)
//        {
//
//            if(num[m].value < want[i])
//            {
//                printf("-1%c", (i==n)?'\n':' ');
//            }
//            else
//            {
//                for(int j=1;j<=m;j++)
//                {
//                if(num[j].value>=want[i])
//                {
//                    printf("%d%c", num[j].index, (i==n)?'\n':' ');
//                    break;
//                }
//                else
//                {
//                    continue;
//                }
//            }
//            }
//        }
//    }


}
