#include <stdio.h>
void main()
{
    int arr[30],i,j,num,k;
    printf("enter the size of an array");
    scanf("%d", &num);
    printf("enter the values of an array");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    for(j=i+1;j<=num;)
    {
        if(arr[j]==arr[i])
        {
            for(k=j;k<num;k++)
            {
                arr[k]=arr[k+1];  
            }
            num--;
        }
        else
        {
            j++;
        }
    }
        for(i=0;i<num;i++)
        {
            printf("values%d\n",arr[i]);
        }
}

    

    
   