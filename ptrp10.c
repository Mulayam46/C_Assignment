#include<stdio.h>
int man()
{
    int *p; /*can point to an integer*/
    int (*ptr)[5]; /*can point to an array of 5 integer*/
    int arr[5];
    p=arr; /*points to 0th element of arr*/
    ptr=&arr; /*points to the whole array arr*/
    printf("p=%p,ptr=%p\n",p,ptr);
p++;
ptr++;
printf("p=%p,ptr=%p\n",p,ptr);
    return 0;
}
