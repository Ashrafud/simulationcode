#include<stdio.h>
main()
{
    int a,i,sum,b[100],c[100];
    c[1]=0;
    printf("Enter customer num: ");
    scanf("%d",&a);
    printf("Enter Inter Arrival Time : ");
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=2;i<=a;i++)
    {
        c[i]=b[i]+c[i-1];
    }
    printf("arrival time.\n");
    for(i=1;i<=a;i++)
    {
        printf("customer%d=%d \n",i,c[i]);
    }

}
