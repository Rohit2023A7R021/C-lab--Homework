#include<stdio.h>
void main()
{
    int arr[30],num,i,loc;
    printf("enter the size");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the element arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    //print the location to delete
    printf("enter the location to delete");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;
    //print the array
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
}