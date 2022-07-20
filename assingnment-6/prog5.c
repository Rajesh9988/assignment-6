#include<stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
     for ( i = 0; i <= n; i++)
    {
        sum +=i*i*i;

    }
    printf("Sum of cube is :- %d",sum);
     
}