#include<stdio.h>
int main()
{
  int c[3][3],d[3][3],i,j,k,sum=0;
  printf("enter the first matrix\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&c[i][j]);
    }
  }
  printf("ENTERED MATRIX ARE :- \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\ntranspose of matrix\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      d[i][j]=c[j][i];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d \t",d[i][j]);
    }
    printf("\n");
  }
  return 0;
}
