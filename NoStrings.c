#include <stdio.h>
int main()
{
    char a[20],b[20];
    int i,j;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; a[i] != '\0'; ++i); 
    for (j = 0; b[j] != '\0'; ++j);
    if (i == j)
        printf("equal");
    if (i < j)
    printf("2nd string is greater");
    if (i > j)
        printf("1st string is greater");
}