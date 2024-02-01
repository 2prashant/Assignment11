//5. Write a function to print first N prime numbers (TSRN).
#include<stdio.h>
int main()
{
    void primenum(int num);
    int num;
    printf("print n prime number\nEnter number=");
    scanf("%d",&num);
    primenum(num);
    return 0;
}
void primenum(int num)
{
    int flag=0;
    for(int i=2; i<=num; i++)
    {
        flag=0;
        for(int j=2; j<=i/2; j++ )
       { 
           if(i%j==0)
            flag=1;
       }
      if(flag==0)
       {
         printf("%d ",i);
       }
    }
    
}