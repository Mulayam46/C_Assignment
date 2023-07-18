int main()
{/*
int arr[10]={25,30,35,40,55,65,70,85,90},*p;
for(p=arr+2;p<arr+8;p=p+2)
      printf("%d ",*p);

}*/
int i,arr[10]={25,30,35,40,55,65,70,85,90};
int *p=arr+9;
for(i=0;i<10;i++)
      printf("%d ",*p--);
}

