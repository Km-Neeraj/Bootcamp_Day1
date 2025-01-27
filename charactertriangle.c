
     #include<stdio.h>
     int main()
     {
           int i,j,row;
           char ch='A';
           printf("Enter the number of row");
           scanf("%d",&row);
           for(i=1;i<=row;i++)
           {
                for(j=1;j<=i;j++)
                {
                    printf("%c",ch);
                    ch++;
                }
                ch='A';
                printf("\n");
           }
           return 0;
     }