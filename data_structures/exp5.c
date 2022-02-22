#include<stdio.h>
#include<math.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':
        case '$':return(pow(op1,op2));
    }


}


int main()
{
    double s[20],op1,op2,res;
    char symbol,postfix[20];
    int top,i;
    printf("\n Enter the expression:");
    gets(postfix);
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        s[++top]=symbol-'0';
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;

        }
    }
    res=s[top--];
    printf("\n The postfix expression is %f",res);
    return 0;
}