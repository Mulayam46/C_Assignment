#include<conio.h>
int main()
{
   int n,i;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=2;i<n;i++)
      if(n%i==0)
      break;/*Break always loop ke body me likha jata hai but condition ke sath break if k
      body me nhi hota hai wo loop k body me hota hai isko likha jata condition ke sath.
      isiliye lagta hai ki break if k body me hai but aisa hai nhi wo loop k body me hai*/
   if(i==n)
      printf("Prime");
   else printf("Not a prime");
   getch();
   return 0;
}
