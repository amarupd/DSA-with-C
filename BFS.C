#include<stdio.h>
#include<conio.h>
int a[10][10], q[10]={0}, visited[10]={0}, i, n, j, f=-1, r=-1;
void bfs(int v);
int main()
{
    int v;
    printf("Enter no of nodes/vertices: ");
    scanf("%d", &n);
    printf("enter Adjacency matrix: ");
    for(i=0; i<n; i++)
       for(j=0; j<n; j++)
         scanf("%d", &a[i][j]);
         printf("Enter the starting vertix: ");
    scanf("%d", &v);
    bfs(v);
    printf("Reachable nodes are: ");
    for(i=0; i<n; i++)
        if(visited[i])
          printf("the node %d is reachable\n",i);
        else
          printf("The node %d is not reachable\n",i);
    return 0;
}
void bfs(int v)
{
    for(i=0; i<n; i++)
    {
        if(a[v][i] && !visited[i])
        {
          q[++r] = i;
        }
    }
if(f<=r)
{
    visited[q[f]]=1;
    bfs(q[++f]);
}
}
