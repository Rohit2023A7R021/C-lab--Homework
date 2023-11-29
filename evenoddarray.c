//WAP to add even and odd numbers from 1 to 10 store them and display the result in different array.
#include <stdio.h>
int main() 
{
    int evenSum=0,oddSum=0;
    int evenArray[5],oddArray[5];
    int evenIndex=0,oddIndex=0;

    for(int i=1;i<=10;i++) 
    {
        if(i%2==0) 
        {
            evenSum+=i;
            evenArray[evenIndex++]=i;
        } 
        else 
        {
            oddSum+=i;
            oddArray[oddIndex++]=i;
        }
    }

    printf("Even numbers:");
    for (int i=0;i<evenIndex;i++) 
    {
        printf("%d",evenArray[i]);
    }
    printf("\nEven sum:%d\n",evenSum);

    printf("Odd numbers:");
    for (int i=0;i<oddIndex;i++) 
    {
        printf("%d",oddArray[i]);
    }
    printf("\nOdd sum:%d\n",oddSum);
    return 0;
}