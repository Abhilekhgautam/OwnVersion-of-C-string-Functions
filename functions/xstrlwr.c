/*Own version of strlwr*/
#include<stdio.h>
void xstrlwr(char *);

int main()
{
    char name[]="ABHILEKH";
    xstrlwr(name);
    printf("Name:%s",name);
    return 0;
}

void xstrlwr(char *a)
{
    int i=0;
    while(*a!='\0')
    {
        if(*a>=65 && *a<=90)
        {
            *a = *a + 32;
        }
        i++;
        a++;
    }
    
}