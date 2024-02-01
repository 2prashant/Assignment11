//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int main()
{
    int primenum(int num);
    int num;
    printf("prime number or not\nreturn 1=not prime number\n return 0=prime number \n Enter number=");
    scanf("%d",&num);
    printf("%d",primenum(num));
    return 0;
}
 int primenum(int num)
 {
    int flag=0;
    for(int i=2;i<(num+1)/2; i++)
    {
        if(num%i==0)
        flag=1;
       break;
    }
    if(flag==1)
   // printf("Not prime number");
   return flag;
 //   if(flag==0)
 //   printf("Prime number");
    if(flag==0)
   {
    return flag;
   }
 } 
