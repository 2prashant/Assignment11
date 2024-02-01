/*                         More on functions in C Language
       1. Write a function to calculate LCM of two numbers. (TSRS)
*/
#include<stdio.h>
int main()
{
    int Lcmnum(int num1,int num2);
    int num1,num2,lcm=0,hcf=0;
    printf("print 2 number of HCF\n Enter two number=");
    scanf("%d%d",&num1,&num2);
    printf("LCM=%d",Lcmnum(num1,num2));
    return 0;
}
int Lcmnum(int num1,int num2)
{
    int lcm=0,hcf=0;
    int smv=num1<num2?num1:num2;
    for(int  i=1; i<=smv; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
           hcf=i;
        }
    }
    lcm=(num1*num2)/hcf;
    return lcm;
}