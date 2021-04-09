//#include <iostream>
//#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stack>

//using namespace std;

int main()
{
    char str[100005];
    int str_0[100005], str_1[100005];
    int j= 0;
    scanf("%s", str);
    //printf("%s", str);
    int sum = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum = sum*10+str[i]-48;
        }
        if(str[i] == ',')
        {
            str_0[j++] = sum;
            sum = 0;
        }
        i++;
    }
    str_0[j++] = sum;
//    for(int i=0;i<j;i++)
//    {
//        printf("%d\n", str_0[i]);
//    }
    for(int i=0;i<j;i++)
    {
        str_1[i] = 1;
    }
    for(int i=0;i<j-1;i++)
    {
        if(str_0[i] < str_0[i+1])
        {

            str_1[i+1] = str_1[i] + 1;
        }
        else if(str_0[i] > str_0[i+1])
        {
            if(str_1[i]-1 == 0)
            {
                str_1[i]++;
                int jj = i;
                while(str_0[jj]<str_0[jj-1] && (jj-1>=0))
                {
                    str_0[jj-1]++;
                    jj--;
                }
            }
            str_1[i+1] = str_1[i] - 1;
        }
    }
    int sum_z = 0;
    for(int i=0;i<j;i++)
    {
       sum_z += str_1[i];
    }
    printf("%d\n", sum_z);
    return 0;
}
