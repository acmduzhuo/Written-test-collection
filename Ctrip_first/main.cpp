#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <stack>
#include <string.h>
#include <map>

using namespace std;

//1*3 = 3
//1*2+2*1 = 4
//1*1+2*2 = 5
//2*3 = 6

int main()
{
    long long int a, b;
    long long int j = 0;
    int k;
    long long int arr[100009];
    cin>>a;
    cin>>b;
    cin>>k;
    int i;
    if(k == 0)
    {
        arr[j++] = 0;
    }
    else{
        long long int t;
        if(a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        for(i = 0;i<=k;i++)
        {
            arr[j++] = a*(k-i) + b*i;
        }
        for(i=0;i<j;i++)
        {
            if(arr[i] == arr[i+1])
            {
                for(int kk=i;kk<j-1;kk++)
                {
                    arr[kk] = arr[kk+1];
                }
                arr[j-1] = -1;
                j--;
                i--;
            }
        }
    }
    printf("[");
    for(i=0;i<j;i++)
    {
        printf("%lld%c", arr[i], (i==j-1)?']':',');
    }
    printf("\n");
    return 0;
}
//long long int arr[100009];
//int judegee(int flag, int num, int startt, int endd)
//{
//    if(startt > endd)
//    {
//    int Zhong = (startt+endd)/2;
//    if(arr[Zhong] == num)
//    {
//        flag = 0;
//        return flag;
//    }
//    else if(arr[Zhong] > num)
//    {
//        return judegee(flag, num, Zhong+1, endd);
//    }
//    else
//    {
//        return judegee(flag, num, startt, Zhong-1);
//    }
//    }
//    flag = 1;
//    return flag;
//}
//int main()
//{
//    long long int a, b, k;
//    cin>>a;
//    cin>>b;
//    cin>>k;
//    int j = 0;
//    long long num;
//    if(a == b)
//    {
//        for(int i=1;i<=k;i++)
//        {
//            arr[j++] = i*a;
//        }
//    }
//    else
//    {
//        int t;
//        if(a > b)
//        {
//            t = a;
//            a = b;
//            b = t;
//        }
//    for(int i=0;i<=k;i++)
//    {
//        if(i==0)
//        {
//            arr[j++] = k*a;
//        }
//        else
//        {
//            int flag = 1;
//            num = (k-i)*a + i*b;
//            //printf("flag = %d\n", judegee(flag, num, 0, j));
//            if(judegee(flag, num, 0, j-1) == 1)
//            {
//                arr[j++] = num;
//            }
//        }
//    }
//
//    }
//    printf("[");
//    for(int i=0;i<j;i++)
//    {
//        printf("%lld%c", arr[i], (i==j-1)?']':',');
//    }
//    return 0;
//}




//void sort(int l, int r)
//{
//    int key = a[l], i = l, j = r;
//    while(i<j)
//    {
//        while(i<j && key<=a[j])
//        {
//            j--;
//        }
//        a[i] = a[j];
//        while(i<j && key>=a[i])
//        {
//            i++;
//        }
//        a[j] = a[i];
//    }
//    a[i] = key;
//    if(l<r)
//    {
//
//    }
//}


//    map<int, string> Map;
//    map<int,string>::iterator it;
//    int n;
//    char str[100];
//    scanf("%d", &n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%s", str);
//        Map[i] = str;
//    }
//    for(int i=0;i<n;i++)
//    {
//       cout<<Map[i]<<endl;
//    }
//    cout<<Map[1]<<endl;
//    getchar();
//    for(int i=0;i<n;i++)
//    {
//        gets(str);
//        Map.insert(pair<string,int>(str, i));
//    }
//    for(it = Map.begin();it!=Map.end();it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
