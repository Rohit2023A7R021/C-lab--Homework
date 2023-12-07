#include<stdio.h>
void main()
{
    int ch;
    printf("are you a sports person?(yes-1,no-0)\n");
    char c;
    scanf("%c",&c);
    if(ch==1)
    {
        printf("are you a state playeror national player?(state-s,national-n)");
        char c;
        scanf("%c",&c);
        if(c=='S'||c=='s')
        {
            printf("you are eligible for 25%% scholarship");
        }
        else
        {
            if(c=='N'||c=='n')
            {
                printf("you are elgible for 50%% scholarship");
            }
            else
            {
                printf("enter correct option");
            }
        }
    }
    else
    {
        printf("you are not eligible for scholarship");
    }
}