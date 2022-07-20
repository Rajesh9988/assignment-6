#include<stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum +=i*i;
    }
     printf("%d\n",sum);
    
}