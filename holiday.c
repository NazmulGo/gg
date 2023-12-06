#include<stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int n[a];

    for(i=0; i<a; i++)
    {
        scanf("%d", &n[i]);
    }
    int max = n[0];

    for(i=1; i<a; i++)
    {
        if(max < n[i])
        {
            max = n[i];
        }
    }
    int value = 0;
    for(i=0; i<a; i++)
    {
      value = value + (max - n[i]);
    }

    printf("%d", value);
    return 0;
}
