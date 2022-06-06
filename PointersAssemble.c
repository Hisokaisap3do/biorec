#include <stdio.h>
void main()
{
    int i,j,n,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp     = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp; 
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}