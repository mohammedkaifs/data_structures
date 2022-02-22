#include<stdio.h>
int main()
{
    char s[100];

    printf("\n Enter a string to reverse:");
    gets(s);
    strrev(s);
    printf("\n Reverse of tte string: %s",s);
    return 0;
}