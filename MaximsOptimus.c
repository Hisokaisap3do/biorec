#include <stdio.h>
int max(int a[],int n)
{
    int i,max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int t,a[3],ans = 0;
    scanf("%d",&t);
    for(int i = 0; i < 3 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < t ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(a[j] == max(a,3))
            {
                ans += a[j];
                a[j] -= 1;
                break;
            }
        }
    }
    printf("%d",ans);
}