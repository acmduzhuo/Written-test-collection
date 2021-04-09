#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <stack>
#include <string.h>
#include <map>

using namespace std;

struct node
{
    int value;
    int need;
    int time;
    double ave;
} a[51], t;
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d", &a[i].value,&a[i].need,&a[i].time);
        a[i].ave = (double)a[i].value/a[i].need;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].ave < a[j].ave)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int sum = 0, time_sum = 0;
    for(int i=0;i<n;i++)
    {
        if(time_sum+a[i].need <= a[i].time)
        {
            sum += a[i].value;
            time_sum += a[i].need;
        }
    }
    printf("%d\n", sum);
    return 0;
}
