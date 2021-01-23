/*Our own defination for strcmp*/

#include<stdio.h>
int xstrcmp(char *,char *);

int main()
{
    if(xstrcmp("Kathmandu","Kathman")==0)
    printf("Both the strings are same");

    else
    {
        printf("They are two different strings");
    }
    return 0;
}

int xstrcmp(char *a ,char *b)
{
    int diff;
    int counter;
    int lengtha = 0;
    int lengthb = 0;
    while(*a !='\0')
    {
        lengtha++;
        a++;
    }
    while(*b !='\0')
    {
        lengthb++;
        b++;
    }
    counter = lengtha>lengthb?lengtha:lengthb;
    for(int i = 0 ; i< counter ; i++)
    {
        if(a[i]==b[i])
        {
            diff = 0;
            continue;
        }
        else
        {
            diff = a[i] - b[i];
           return diff;
        }
    }
    return diff;

}