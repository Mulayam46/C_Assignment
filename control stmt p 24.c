#include<stdio.h>
#include<stdlib.h>
main()
{
    int choice;
   while(1)
   {
     printf("1.create a database\n");
     printf("2.insert a new record\n");
     printf("3.modify a record\n");
     printf("4.delete a record\n");
     printf("5.display a record\n");
     printf("6.exit\n");
     printf("enter a choice");
     scanf("%d",&choice);
       switch(choice)
       {
       case 1: printf("databse created.....\n\n");break;
       case 2: printf("record inserted.....\n\n");break;
       case 3:printf("record modified.....\n\n");break;
       case 4:printf("record deleted.....\n\n");break;
       case 5:printf("record displayed...\n\n");
       case 6:exit(0);break;
        default: printf("wrong choice");
       }
   }
}
