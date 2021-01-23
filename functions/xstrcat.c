/*own version of strcat*/

#include<stdio.h>
void xstrcat(char *,char*);

int main()
{
    char str1[10]="Abhilekh";
    char str2[20]= "Gautam";

    xstrcat(str2,str1);
    printf("The concatinated form is %s",str2);
}
void xstrcat(char *a,char*b)
{
   while(*a!='\0')
   {
       a++;
   }
   while(*b != '\0')
   {
       *a = *b;
       b++;
       a++;
   }
   *a = '\0';
   
}
