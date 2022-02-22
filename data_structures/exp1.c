#include<stdio.h>
int a[4],n,i,pos,elem;


void create()
{
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
}

void display()
{
    printf("\n The array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}

void insert()
{
    printf("\n Enter the positon of the element:");
    scanf("%d",&pos);
    printf("\n Enter the elment you want to insert:");
    scanf("%d",&elem);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];

    }
    a[pos]=elem;
    n=n+1;
}

void delete()
{
    printf("\n Enter the postion of the element of you want to delete:");
    scanf("%d",&elem);
    elem=a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i+1]=a[i];
    }
    n=n-1;
    printf("\n The deleted element is= %d",elem);
}


int main()
{
    int ch;
    do{
        printf("\n ---------MENU-------");
        printf("\n1.create\n2.display\n3.insert\n4.delete\n5.exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);  
        switch(ch)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:return 0;
            break;
            default:printf("\n invalid choice!!");
            break;
        }


    }while(ch!=5);
    return 0;
}