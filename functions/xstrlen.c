/*Our own strlen Function*/

#include<stdio.h>
int xstrlen(char *);

int main()
{
char name[]="Abhilekh";
printf("The length of the string is %d",xstrlen(name));

return 0;
}

int xstrlen(char *a)
{
    int length = 0;
    while(*a!='\0')
    {
      length++;
      a++;
    }
    return length;
    
}