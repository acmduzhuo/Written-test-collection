#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <stack>
#include <string.h>
#include <map>

using namespace std;

int a[101][101];
int n, m;


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        int num = n/2;
        int x = 0, y = 0;
        int sum = 1;
        int i;
        for(i=1;i<=num;i++)
        {
            if(i%2==1)
            {

                while(y < n-(i-1))
                {
                    a[x][y++] = sum++;
                }
                y--;
                x++;
                while(x <  n-(i-1))
                {
                    a[x++][y] = sum++;
                }

                x--;
                y--;
                while(y >= (i-1))
                {
                    a[x][y--] = sum++;
                }
                y++;
                x--;

                while(x >= i)
                {
                    a[x--][y] = sum++;
                }
                x++;
                y++;
            }
            else
            {
                while(x<n-(i-1))
                {
                    a[x++][y] = sum++;
                }
                x--;
                y++;
                while(y < n-i+1)
                {

                    a[x][y++] = sum++;
                }
                y--;
                x--;
                while(x > (i-2))
                {
                    a[x--][y] = sum++;
                }
                x++;
                y--;
                while(y > (i-1))
                {
                    a[x][y--] = sum++;
                }
                x++;
                y++;

            }
        }
        if(n %2 == 1){
                a[num][num] = sum;
        }

        while(m--)
        {
            int xx, yy;
            scanf("%d %d", &xx, &yy);
            printf("%d\n", a[xx][yy]);
        }
    }
    return 0;
}
