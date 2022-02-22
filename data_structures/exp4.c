#include<stdio.h>
#define MAX 4
int stack[MAX],item;
int top=-1,ch,count=0,status=0;

void push(int stack[],int item)
{
    if(top==(MAX-1))
    printf("\n stack is overflow!!");
    else
    {
        stack[++top]=item;
        status++;

    }
}

int pop(int stack[])
{
    int ret;
    if(top==-1)
    printf("\n stack is underflow!!");
    else
    {
        ret=stack[top--];
        status--;
        printf("\nThe deleted element is %d",ret);

    }
    return ret;
}

void pallindrome(int stack[])
{
    int i,temp;
    temp==status;
    for(i=0;i<temp;i++)
    {
        if(stack[i]==pop(stack))
        count++;
    }
    if(temp==count)
    printf("\n stack contents are pallindrome");
    else
    printf("\n stack contents are not pallindrome");

}

void display(int stack[])
{
    int i;
    printf("\n The stack contents are");
    if(top==-1)
    printf("\n The stack is empty");
    else
    {
        for(i=top;i>0;i--)
        printf("\n------|%d|-------",stack[i]);

    }
}



int main()
{
    do{
        printf("\n-----------MAIN MENU------\n");
        printf("\n1. PUSH(insert) in the stack");
        printf("\n2. POP(delete) an item from stack");
        printf("\n3. PALLINDROME check using stack");
        printf("\n4.exit from stack");
        printf("\n Enter you choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("\n Enter the element to be pushed:");
        scanf("%d",&item);
        push(stack,item);
        display(stack);
        break;

        case 2:pop(stack);
        display(stack);
        break;
        
        case 3:pallindrome(stack);
        break;

        case 4:return 0;

        default:printf("\n Invalid choice!!!!");

            break;

        }
        
    }
    while(ch!=4);
    
}