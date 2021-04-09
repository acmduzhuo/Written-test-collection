#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

#define INF 0x3f3f3f

using namespace std;

//int a[1000006];
//int findd(int flag, int mid, int n, int m, int k)
//{
//    if((mid-(m-1)/2)<0 || (mid+m/2)>n)
//    {
//        return -1;
//    }
//    else{
//        if(flag == 0)
//        {
//            int sum = 0;
//            for(int i=-((m-1)/2);i<=m/2;i++)
//            {
//                //printf("%d\n", i);
//                sum += a[mid+i];
//            }
//            if(sum == m*k)
//            {
//                return mid+m/2;
//            }
//            else if(sum < m*k)
//            {
//                return findd(1, mid+1, n, m, k);
//            }
//            else
//            {
//                return findd(0, mid-1, n, m, k);
//            }
//        }
//        else if(flag == 1)
//        {
//            int sum = 0;
//            for(int i=-((m-1)/2);i<=m/2;i++)
//            {
//                printf("%d\n", i);
//            //printf("%d\n", i);
//               sum += a[mid+i];
//            }
//            if(sum > m*k){
//                return -1;
//            }
//            else
//            {
//                if(sum == m*k)
//                {
//                    return mid+m/2;
//                }
//                else
//                {
//                    return findd(1, mid+1, n, m, k);
//                }
//            }
//        }
//        else
//        {
//            int sum = 0;
//            for(int i=-((m-1)/2);i<=m/2;i++)
//            {
//            //printf("%d\n", i);
//               sum += a[mid+i];
//            }
//            if(sum < m*k){
//                return -1;
//            }
//            else
//            {
//                if(sum == m*k)
//                {
//                    return mid+m/2;
//                }
//                else
//                {
//                    return findd(0, mid+1, n, m, k);
//                }
//            }
//        }
//    }
//}
int main()
{
    stack<int>q, p;
    int n;
    int num;
    scanf("%d", &n);
    char str[10];
    while(n--)
    {
        scanf("%s", str);
        if(str[1] == 'u')//push
        {
            scanf("%d", &num);
            q.push(num);
        }
        else if(str[1] == 'o')//pop
        {
            q.pop();
        }
        else
        {
            int minn = INF;
            while(!q.empty())
            {
                if(minn > q.top())
                {
                    minn = q.top();
                }
                p.push(q.top());
                q.pop();
            }
            while(!p.empty())
            {
                q.push(p.top());
                p.pop();
            }
            printf("%d\n", minn);
        }
    }
//    int n, m, k;
//    scanf("%d %d %d", &n, &m, &k);
//    int minn = INF;
//    int num, mid;
//    for(int i=1;i<=n;i++)
//    {
//        scanf("%d", &a[i]);
//        if(a[i]>k)
//        {
//            num =a[i] - k;
//            if(num < minn)
//            {
//                minn = num;
//                mid = i;
//            }
//        }
//        else
//        {
//            num = k-a[i];
//            if(num < minn)
//            {
//                minn = num;
//                mid = i;
//            }
//        }
//    }
//    printf("%d\n", findd(0, mid, n, m, k));
    return 0;
}
