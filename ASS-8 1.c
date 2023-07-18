main()
{
   int  n;
   while(1){
   printf("Enter a months number\n");
   printf("1. for january\n");
   printf("2. for february\n");
   printf("3.for march\n");
   printf("4. for april\n");
   printf("5. for may\n");
   printf("6. for june\n");
   printf("7. for july\n");
   printf("8. for agust\n");
   printf("9. for september\n");
   printf("10. for october\n");
   printf("11. for november\n");
   printf("12. for december\n");
   printf("0. for exit\n");
    printf("Enter your choice\n:");
   scanf("%d",&n);
   switch(n)
   {
   case 2:printf("No of days are in this month =29");break;
   case 6:
   case 4:
   case 9:
   case 11:printf("No of days are in this month=30");break;
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:printf("No of days are in this month=31");break;
   case 0:exit(0);
   default : printf("Plz enter valid months number");
   }
   }
}

