  #include<stdio.h>
  int main()
  {
    int i,j,k,l,n;
    printf("Enter the number of row\n");
    scanf("%d",&n);
    for(l=0;l<n;l++)
    {
       for(i=0;i<n;i++)
       {
          for(j=0;j<n*l-l;j++)
          {
               printf(" ");
          }
          for(k=0;k<=i;k++)
          {
               printf("*");
          }
          printf("\n");
       }
       //printf("\n");
    }
    return 0;
  }