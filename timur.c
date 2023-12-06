#include<stdio.h>
int main()
{
    int a, b, c, d, t;
    scanf("%d", &t);
    while(t--)
    {   int gg=0;
        scanf("%d%d%d%d", &a, &b, &c, &d);

       if(a < b)
       {
           gg++;
       }

        if(a<c)
        {
            gg++;
        }

        if(a<d)
        {
            gg++;
        }
        printf("%d\n", gg);
    }


    return 0;
}
