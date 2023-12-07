#include<stdio.h>
int main()
{
    int class[20]={12,13,14,15,16,17,18,19,10,20};
    printf("size of int:%d bytes",sizeof (int));
    for(int i=0;i<20;i++)
    {
        printf("\nclass[i]=%d address-%u\n",&class[i],&class[i]);
    }
    printf("6th student roll number is %d\n",class[5]);
    printf("8th student roll number is %d\n",class[7]);
    return 0;
}