         #include<stdio.h>
     int main()
     {
        int i,j,row;
        printf("Enter the number of row\n");
        scanf("%d",&row);
        for(i=row;i>0;i--)
        {
           for(j=row;j>i;j--)
           {
               printf(" ");
           }
          for(j=1;j<=2*i-1;j++)
          {
            printf("*"); 
          }
          printf("\n");
        }
        return 0;
     }