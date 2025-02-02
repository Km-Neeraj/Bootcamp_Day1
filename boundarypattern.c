  #include<stdio.h>
  int min(int a,int b)
  {
    return(a<b?a:b);
  }
  int main()
  {
     int n,i,j,k,e,w,nn,s,r1,r2,r;
     printf("Enter number of rows\n");
     scanf("%d",&n);
     for(i=0;i<2*n-1;i++)
     {
        for(j=0;j<2*n-1;j++)
        {
           w=j;
           nn=i;
           e=2*n-2-j;
           s=2*n-2-i;
           r1=min(e,w);
           r2=min(nn,s);
           r=min(r1,r2);
           printf("%d",n-r);
        }
        printf("\n");
     }
     return 0;
  }