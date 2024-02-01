//7. Write a function to print first N terms of Fibonacci series (TSRN).
#include<stdio.h>
int main()
{
    void fibonum(int num);
    int num;
    printf("print n term of fibonacci series\nenter number= ");
    scanf("%d",&num);
    printf("0 1 ");
    fibonum(num);
    return 0;
    
}
void fibonum(int num)
{
    int pri=0,curr=1,fibo=0;
    for(int i=1; i<=num-2; i++)  
    {
        fibo=pri+curr;
        pri=curr;
        curr=fibo;

        printf("%d ",fibo);
    }
}