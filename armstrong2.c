#include<stdio.h>
int main()
{
    int number,sum=0,digit,cube,original;
    printf("enter a number:");
    scanf("%d",&original);
    number=original;
    while(number!=0)
    {
        digit=number%10;
        cube=digit*digit*digit;
        sum+=cube;
        number/=10;
    }
    if(sum==original)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not an amstrong number");
    }
}
    
