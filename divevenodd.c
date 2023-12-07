#include<stdio.h>
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if((num/2)*2==num)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}