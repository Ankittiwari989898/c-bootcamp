#include<stdio.h>
int main()
{
   int n,sum=0,i=1;
   printf("enter a number");
   scanf("%d",&n);
   while(i<=n)
   {
   sum=sum+i;
   i++;
   }
   printf("sum is %d",sum);

   return 0;

}
