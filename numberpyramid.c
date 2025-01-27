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
                printf(" ");
             }
             for(j=1;j<=i;j++)
             {
                printf("%d",j);
             }
             for(j=i-1;j>=1;j--)
             {
               printf("%d",j);
             }
             printf("\n");

        }
        return 0;
   }