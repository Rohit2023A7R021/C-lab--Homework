#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a=10,b=20;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping");
    printf("\na=%d b=%d",a,b);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nAfter swapping");
    printf("\n*x=%d *y=%d",*x,*y);
    return 0;
}