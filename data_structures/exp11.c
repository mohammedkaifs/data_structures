#include<stdio.h>
int a[10][10],m,n,i,j,source,s[10],b[10];
int visited[10];

void create()
{
    printf("\n Enter the number of vertices:");
    scanf("%d",&n);
    printf("\n Enter the adjacency matrix graph:");
    for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
     scanf("%d",&a[i][j]);

}
 void bfs()
 {
      int
 }