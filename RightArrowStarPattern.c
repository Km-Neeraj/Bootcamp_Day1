     #include<stdio.h>
     int main()
     {
         int i,j,row;
         printf("Enter tghe number of row\n");
         scanf("%d",&row);
         for(i=1;i<=row;i++)
         {
             for(j=1;j<i;j++)
             {
                 printf("  ");
             }
              for(j=row;j>=i;j--)
              {
                 printf("*");
              }
              printf("\n");
         }

      for(i=row;i>1;i--)
         {
             for(j=2;j<i;j++)
             {
                 printf("  ");
             }
              for(j=row+1;j>=i;j--)
              {
                 printf("*");
              }
              printf("\n");
         }   
         return 0;
     }