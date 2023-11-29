#include<stdio.h>
int main()
{
    int class[20]={12,13,14,15,16,17,18,19,10,20};
    for(int i=0;i<20;i++)
    {
        printf("%d\n",class[i]);
    }
    printf("6th student roll number is %d\n",class[5]);
    printf("8th student roll number is %d\n",class[7]);
    return 0;
}