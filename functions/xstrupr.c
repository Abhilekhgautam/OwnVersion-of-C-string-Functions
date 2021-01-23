/*Own version of strupr*/
#include<stdio.h>
void xstrupr(char *);

int main()
{
    char name[]="Abhilekh";
    xstrupr(name);
    printf("Name:%s",name);
    return 0;
}

void xstrupr(char *a)
{
    int i=0;
    while(*a!='\0')
    {
        if(*a>=97 && *a<=122)
        {
            *a = *a - 32;
        }
        i++;
        a++;
    }
}