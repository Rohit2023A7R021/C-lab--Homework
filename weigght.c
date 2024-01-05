#include<stdio.h>
int main()
{
    int  age,weight,count=0;
    for(int i=1;i<=5;i++)
    {
        printf("enter age and weight for student");
        scanf("%d%d",&age,&weight);
        {
            count++;
        }
    }
    if(age<25 && weight<50)
    {
        printf("number of student age less than 25 and weight less than 50");
    }
    return 0;
}