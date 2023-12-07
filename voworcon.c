#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i=1;i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
    printf("the vowel in the string is=%d",vow);
    printf("the consonant in the string is=%d",con);
}