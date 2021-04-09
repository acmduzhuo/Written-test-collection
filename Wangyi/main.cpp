#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <string.h>
#include <map>
#include <stack>
#define INF 0x3f3f3f
using namespace std;

struct node
{
    int a;
    int b;
    int w;
} num[30001];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<n;i++)
    {
        scanf("%d %d %d", &num[i].a, &num[i].b, &num[i].w);
    }
    int sum = 0, sum_re = 0;
    for(int i=2;i<=n;i++)
    {
        int x;
        x = i;
        while(x != 1)
        {
            for(int j=1;j<n;j++)
            {
                if(num[j].b == x)
                {
                    x = num[j].a;
                }
                printf("num[j].w = %d\n", num[j].w);
                sum += num[j].w;
                break;
            }
        }
    }
    printf("%d\n", sum);
//    int n;
//    stack<int>q;
//    stack<int>q1;
//    int arr[501];
//    scanf("%d", &n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d", &arr[i]);
//        q.push(arr[i]);
//    }
//    for(int i=0;i<q.size();i++)
//    {
//        int *a = q.top();
//        if(*a == *(a-1))
//        {
//            while(q.top != *a)
//            {
//                q1.push(q.top());
//                q.pop();
//            }
//            q.pop();
//            q.pop();
//            q.push((*a)+1);
//            while(!q1.empty())
//            {
//                q.push(q1.top());
//                q1.pop();
//            }
//        }
//    }
//    int maxx = -1;
//    while(!q.empty())
//    {
//        if(maxx < q.top())
//        {
//            maxx = q.top();
//            q.pop();
//        }
//    }
//    printf("%d\n", maxx);

    return 0;
}
