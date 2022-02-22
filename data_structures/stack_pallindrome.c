#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack[MAX],item;
int ch, top=-1;count=0,status=0;

void push(int stack[], int item)
{
    if(top==(MAX-1))
    {
        printf("\n stack overflow!!");
    }
    else
    {
    stack[++top]=item;
    status++;
    }

}

void pop(int stack[])
{
    int ret;
    if(top==-1)
    {
        printf("\n stack underflow!!");

    }
    else
    {
    ret=stack[top--];
    status--;
    }
    printf("\n The popped element is %d",ret);
 } 
}
  return ret;

void pallindrome(int stack[])
{
    int i,temp;
    for(i=0;i<temp;i++)
    {
        if(stack[i]==pop(stack))
        count++;
    }
    if(temp==count)
    printf("\n stack contents are pallindrome");
    else
    printf("\n stack contents are not a pallindrome");
    
}

void display()
{
    int i;
    printf("\n The stack contents are");
    if(top==-1)
    printf("\n stack is empty");
    else
    {
        for(i=top;i>0;i++)
        printf("\n-----\n |%d|",stack[i]);
        printf("\n");
    }
}

int main()
{
    do{
        printf("\n\n ---MAIN MENU---\n");
        print("\n 2")
    }
    
    return 0;
}