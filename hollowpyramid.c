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
             if(j==1||j==i||i==row)
             {
                 printf("* ");
             }
                
             
             else{
                   printf("  ");
             }
         }
         printf("\n");
      }
      return 0;
  }