main()
{
    /*int a;
    scanf("%d",&a);
    if(a==0)
        printf("");
    else
    printf("hello");}*/

   int m1,m3,m2,m4,m5,m6,per ,total;
   scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
   per=(m1+m2+m3+m4+m5+m6)/6;

   if(per>=85)
    printf("A");
    else if (per>=70)
    printf("B");
else if(per>=55)
     printf("c");
else if(per>=40)
      printf("D");
else
    printf("E");
}


