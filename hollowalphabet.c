#include<stdio.h>
int main()
{
   int i,j,k,n;
   char ch;
   printf("Enter the number of row\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      ch=65;
       for(j=n;j>=i;j--)
       {
           printf("%c",ch);
           ch++;
       }
       for(k=1;k<2*i-2;k++)
       {
          printf(" ");
       }
       for(j=n;j>=i;j--)
       {
         ch--;
         if(j==n&&i==1)
         {
         continue;
         }
         printf("%c",ch);
       }
   
       printf("\n");
   }
   return 0;
}