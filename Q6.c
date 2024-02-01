//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
int main()
{
    void primenum(int num1,int num2);
    int num1,num2;
    printf("print prime number between two number\n Enter two number=");
    scanf("%d%d",&num1,&num2);
    primenum(num1 ,num2);
    return 0;
}
void primenum(int num1,int num2)
{
    int flag;
    for(int i=num1; i<=num2;i++)
    {
        flag=0;
        for(int j=2;j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }
}