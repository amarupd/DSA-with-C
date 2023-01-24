#include <stdio.h>
#include <conio.h>
int a[10][10], s[10] = {0}, visited[10] = {0}, i, n, j, top = -1;
void dfs(int v);
int main()
{
    int v;
    printf("Enter no of nodes/vertices: ");
    scanf("%d", &n);
    printf("enter Adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the starting vertix: ");
    scanf("%d", &v);
    dfs(v);
    for (i = 0; i < n; i++)
        if (visited[i])
            printf("the node %d is reachable\n", i);
        else
            printf("The node %d is not reachable\n", i);
    return 0;
}
void dfs(int v)
{
    for (i = 0; i < n; i++)
    {
        if (a[v][i] && !visited[i])
        {
            s[++top] = i;
        }
    }
    if (top != -1)
    {
        visited[s[top]] = 1;
        dfs(s[top--]);
    }
}
