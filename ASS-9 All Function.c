
float area(float r)
{
   float A;
   A=3.14*r*r;
   return A;
}

float circumference(float r)
{
   float A;
   A=2*3.14*r;
   return A;
}
void natural(int a)
{
   int i;
   for(i=1;i<=a;i++)
   printf("%d ",i);
}
void Evennatural(int a)
{
   int i;
   for(i=1;i<=a;i++)
      if(i%2==0)
   printf("%d ",i);
}
int Sumnatural(int a)
{
   int i,s=0;
   for(i=1;i<=a;i++)
   s=s+i;
   return s;
}
int Iseven(int a)
{
   if(a%2==0)
   return 1;
   return 0;
}
int fact(int a)
{
   int i,fact=1;
   for(i=1;i<=a;i++)
      fact=fact*i;
   return fact;
}
 int permutation(int n,int r)
{
   int p;
   p=(fact(n)/fact(n-r));
   return p;

}
int combination(int n,int r)
{
   int c;
   c=(fact(n)/(fact(r)*fact(n-r)));
   return c;

}
