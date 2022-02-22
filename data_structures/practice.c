#include<stdio.h>
int n,i,a[20],pos,elem;

void create()
{
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    printf("\n Enter the number of elements:");
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
        printf("%d",a[i]);
    }
}

void insert()
{
    printf("\n Enter the positon of element to be inserted:");
    scanf("%d",&pos);
    printf("\n Enter the element you want to insert:");
    scanf("%d",&elem);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        
    }
    a[pos]=elem;
    n=n+1;
}

void del()
{
    printf("\n The postion of elment you want to delete:");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
    {
        a[i+1]=a[i];
    }
    n=n-1;
}

int main()
{
    int ch;
    do{
    printf("\n -----MAIN MENU----");
    printf("\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.EXIT");
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
        case 4:del();
        case 5:return 0;
        break;
        default:printf("\n Invalid choice@#@#$");
    }
    }while(ch!=4);
    return 0;
}