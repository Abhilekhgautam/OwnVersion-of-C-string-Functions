/*Own version of strrev*/
#include<stdio.h>
char * xstrrev(char *);

int main()
{
    char name[]="Abhilekh";
    printf("The reversed form is %s",xstrrev(name));
    return 0;

}

char * xstrrev(char *a)
{
     int i,j;
    char name[8];
    for(i = 0 ; a[i]!='\0';i++)
    {
        name[i]= a[i];
    }
    name[i] = '\0';
   
    for(i = 0,j=7;name[i]!='\0';i++,j--)
    {
        a[i] = name[j];
    }
    a[i] = '\0';
    return a;
}