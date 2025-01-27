  #include<stdio.h>
  int main()
  {
      int i,j,row,k;
      printf("Enter the number of row\n");
      scanf("%d",&row);
      for(i=1;i<=row;i++)
      {
          for(k=row;k>i;k--)
          {
             printf(" ");
          }
         for(j=1;j<=i;j++)
         {
            printf("* ");
         }
         printf("\n");
      } 

      for(i=1;i<=row;i++)
      {
          for(k=i;k>1;k--)
          {
             printf(" ");
          }
         for(j=row;j>=i;j--)
         {
            printf("*");
            printf(" ");
         }
         printf("\n");
      }
        return 0;
  }