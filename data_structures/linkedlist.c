#include<stdio.h>
#include<stdlib.h>
struct node 
{
     int info;
      struct node *link;

      
};
typedef struct node* NODE;

NODE getnode()
{
    int x;
    x=malloc(sizeof(struct node ));
    if(x==NULL)
    {
        printf("\n out of memory");
        exit(0);
    }
     x->link=NULL;
    return x;

}
free(x);

NODE insert_front(int item,NODE first)
{
    NODE temp;
    first=insert_front;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;

}


int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice")
    }

    return 0;
}