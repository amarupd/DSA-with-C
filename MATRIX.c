   #include<stdio.h>
   int main()
   {
     int a[5][5],b[5][5],c[5][5],i,j,k,sum=0;
     printf("ENTER THE FIRST MATRIX 3X3\n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
         scanf("%d",&a[i][j]);
       }
     }
     printf("ENTER SECOND MATRIX 3X3\n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
         scanf("%d",&b[i][j]);
       }
     }
     printf("ENTERED MATRIX ARE :- \n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
         printf("%d\t",a[i][j]);
       }
       printf("\n");
     }
     printf("\n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
         printf("%d\t",b[i][j]);
       }
       printf("\n");
     }
     printf("PRODUCT OF TWO MATRIX\n");
     for (i=0;i<3;i++)
     {
           for (j=0;j<3;j++)
           {
              sum=0;
              for (k=0;k<3;k++)
              {
                 sum=sum+a[i][k]*b[k][j];
              }
              c[i][j]=sum;
           }
        }
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
         printf("%d\t",c[i][j]);
       }
       printf("\n");
     }
     return 0;
   }
