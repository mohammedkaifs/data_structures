#include<stdio.h>
#include<math.h>

void tower(int n,int source,int temp,int destination)
{
    if(n==0)
    return;
    tower(n-1,source,destination,temp);
    printf("\n Move disc %d from %c to %c",n,source,destination);
    tower(n-1,temp,source,destination);

}
int main()
{
    int n;
    printf("\n Enter the number of discs:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n Total number of moves are %d",(int)pow(2,n)-1);
    
    return 0;
}