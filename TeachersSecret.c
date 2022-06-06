#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char keys[100],sen[100];
    scanf("%[^\n]s",keys);
    scanf("%[^\n]s",sen);
    printf("%d\n%s",n,sen);
    printf("%s",keys);
    char k[50],wrd[50];
    for(int i=0;i<sizeof(keys);i++)
    {
        if(keys[i]!=' ')
        {
            k[i]=keys[i];
        }
        else
        {
            k[i]='\0';
            printf("%s\n",k);
        }
    }
}