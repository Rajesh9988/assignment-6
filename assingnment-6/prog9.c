#include<stdio.h>

 int main()
 {
    int num1,num2,result,flag=1;
    printf("Enter two positive integer\n");
    scanf("%d%d",&num1,&num2);
    result = (num1>num2)?num1:num2;
    while (flag)
    {
        if (result%num1==0&&result%num2==0)
        {
            printf("LCM= %d and %d and %d",num1,num2,result);
            break;
        }
        ++result;
    }
    
 }