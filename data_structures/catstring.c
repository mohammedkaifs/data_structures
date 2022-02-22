#include<stdio.h>
#include<stdio.h>
int main()
{
    char s1[100],s2[100];

    printf("\n Enter the a string1");
    gets(s1);
    printf("\n Enter the a string2");
    gets(s2);

    strcat(s1,s2);
    printf("\nThe concatenated string is %s ",s1);

    return 0;
}