#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
char str[100], pat[50], rep[50], ans[100];
int i, c, j, m, k, flag = 0;

void stringmath()
{
    i = m = c = j = 0;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                    ans[j] = rep[k];
                i = 0;
                c = m;
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
        ans[j] = '\0';
    }
}

int main()
{
    printf("\n Enter a main string:");
    gets(str);
    printf("\n Enter a pattern string:");
    // flushall();
    gets(pat);
    printf("\n Enter a replace string:");
    // flushall();
    gets(rep);
    stringmath();
    if(flag==1)
    printf("\n The resultant string is %s",ans);
    else
    printf("\n Pattern not found!!");

return 0;
}