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
    int num;
    int price;
    int value;
}a[101], t;
int main()
{
    int n, m;
    scanf("%d %d", &n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d", &a[i].num, &a[i].price,&a[i].value);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].value/a[i].price < a[j].value/a[j].price)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int sum = 0;
    int price_sum = 0;
//    int flag = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i].num;j++)
        {
            if(m < price_sum+a[i].price)
            {
                break;
            }
            sum += a[i].value;
            price_sum += a[i].price;
        }
    }
    printf("%d\n", sum);
    return 0;



}
