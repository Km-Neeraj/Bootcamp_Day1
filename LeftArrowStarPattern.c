   #include<stdio.h>
   int main()
   {
        int i,j,row;
        printf("Enter the number of row\n");
        scanf("%d",&row);
        for(i=1;i<=row;i++)
        {
            for(j=row;j>i;j--)
            {
                printf("  ");
            }
            for(j=i;j<=row;j++)
            {
                printf("*");
            }
            printf("\n");
        }

   for(i=row;i>1;i--)
        {
            for(j=row;j>i;j--)
            {
                printf("  ");
            }
            for(j=i-1;j<=row;j++)
            {
                printf("*");
            }
            printf("\n");
        }
return 0;
   }