/*Own strcpy function*/

#include<stdio.h>
void xstrcpy(char *,char*);

int main()
{
    char name[]="Abhilekh";
    char copyName[8];
    xstrcpy(copyName,name);
    printf("The string at copyName is %s",copyName);
    return 0;
}
void xstrcpy(char *a, char *b)
{
    int length=0;
    while(*b!='\0')
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

