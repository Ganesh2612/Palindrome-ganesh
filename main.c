

#include <stdio.h>

int main()
{
   int a=0,b=1,c,limit,i;
   printf("Enter the limit:");
   scanf("%d",&limit);
   for(i=1;i<=limit;i++)
   {
   printf("%d\n",a);
   c=a+b;
   a=b;
   b=c;
   }
   return 10;
}
