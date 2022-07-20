#include<stdio.h>

int main()
{
    int i,count,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        n =n/10;
        count++;
    }
    printf("The number digit:-%d",count);
    
}