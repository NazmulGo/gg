#include<stdio.h>
#include<string.h>
int main()
{
    char a[222];
    scanf("%s", a);
    int i;

    for(i=0; a[i] != '\0'; )
    {
        if(a[i] == '-' && a[i+1] == '.')
            {
                printf("1");
                i = i + 2;
            }
        else if(a[i] == '-' && a[i+1] == '-')
        {
            printf("2");
            i = i + 2;
        }
        else
        {
            printf("0");
            i++;
        }
    }


}
