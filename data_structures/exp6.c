#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int ch, rear = -1, front = 0, count = 0;
char Q[MAX], item;

void insert()
{
    if (count == MAX)
        printf("\n The circular queue is full!!");
    else
    {
        rear = (rear + 1) % MAX;
        Q[rear] = item;
        count++;
    }
}


void del()
{
    if(count==0)
    printf("\n The circular queue is empty!!");
    else
    {
        item=Q[front];
        printf("\n The deleted element is %c",item);
        front=(front+1)%MAX;
        count--;
    }
}

void display()
{
    int i,f=front;
    if(count==0)
    printf("\n The circualr queue is empty!!");
    else
    {
        printf("\n The circular queue contents are:");
        for(i=0;i<count;i++)
        {
            printf("%c",Q[f]);
            f=(f+1)%MAX;

        }
    }
}


int main()
{

    do{
        // printf("\n-----MAIN MENU-----\n");
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\n Enter you choice:");
        scanf("%d",&ch);
        // flushall();
        switch (ch)
        {
        case 1:printf("\n Enter the character to be inserted:");
               
               scanf("%c",&item);
               insert();
               break;

        case 2:del();
               break;

        case 3:display();
              break;

        case 4:return 0;
               break;
    
        default:printf("\n Error in choice##########");
            break;
       }

   }   
    while(ch!=4);
    return 0;
}