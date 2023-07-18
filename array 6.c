int main()
{
int num, arr[10],i,j;
printf("enter a decimal number:");
scanf("%d",&num);
i=0;
while (num>0)
{
   arr[i]=num%2;
   num/=2;
   i++;
}
printf("binary number is %d :",arr[i]);
/*for(j=i-1;j>=0;j--)
   printf("%d",arr[j]);
printf("\n");*/
return 0;
}
