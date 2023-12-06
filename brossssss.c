#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];

    scanf("%s", a);

    int i, top = 0;
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] == '7' || a[i] == '4')
        {
            top++;
        }
    }

     if(top == 7 || top == 4)
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }
     return 0;
}
