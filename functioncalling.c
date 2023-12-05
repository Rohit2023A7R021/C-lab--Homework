#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,z;
    printf("enter value of x and y");
    scanf("%d%d",&x,&y);
    z=add(x,y);//function calling
    printf("%d",z);
}
int add(int a,int b)
{
    return a+b;
}