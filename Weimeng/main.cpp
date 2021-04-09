#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <stack>
#include <string>

using namespace std;

struct node{
    char c;
    int num;
}aa[100], bb[100];
int main()
{
    char a[10], b[10];
    scanf("%s", a);
    scanf("%s", b);
    int j = 0, k = 0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {
            aa[j].c = a[i];
            aa[j++].num = 1;
        }
        else
        {
            int u = 0;
            for(u=0;u<j;u++)
            {
                if(aa[u].c == a[i])
                {
                    aa[u].num++;
                }
            }
            if(u == j)
            {
                aa[j].c = a[i];
                aa[j++].num = 1;
            }
        }
    }
    for(int i=0;b[i]!='\0';i++)
    {
        if(i==0)
        {
            bb[k].c = b[i];
            bb[k++].num = 1;
        }
        else
        {
            int p = 0;
            for(p=0;p<k;p++)
            {
                if(bb[p].c == b[i])
                {
                    bb[p].num++;
                }
            }
            if(p == k)
            {
                bb[k].c = b[i];
                bb[k++].num = 1;
            }
        }
    }
    for(int i=0,ii=0;i<j,ii<k;i++,ii++)
    {
        printf("%c %d\n%c %d\n", aa[i].c, aa[i].num, bb[ii].c, bb[ii].num);
    }
    return 0;
}
