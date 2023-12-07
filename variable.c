#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d%d",&x,&y,&z);
    printf("x value is:%d\n",x);
    printf("y value is:%d\n",y);
    printf("z value is:%d\n",z);
    a=(x>=5)?7:9;
    b=(y<=5)?6:8;
    c=(z==5)?5:7;

    printf("\n a value is:%d\n",a);
    printf("b value is:%d\n",b);
    printf("c value is:%d\n",c);

    int sum1=x+y+z;
    int sum2=a+b+c;

    printf("\n sum1 value is:%d\n",sum1);
    printf("sum2 value is:%d\n",sum2);

    (sum1=sum2)? printf("\n both are equal"):printf("both are not equal");

    return 0;
}