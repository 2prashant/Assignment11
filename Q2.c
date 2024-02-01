//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int main()
{
    int hcfnum(int num1,int num2);
    int num1,num2;
    printf("calculate HCF\n Enter two nmber=");
    scanf("%d%d",&num1,&num2);
    printf("HCF=%d",hcfnum(num1,num2));
    return 0;
}
 int hcfnum(int num1,int num2)
 {
    int hcf=0;
    int smv=num1<num2?num1:num2;
    for(int i=1;i<=smv;i++)
    {
        if((num1%i==0) && (num2%i==0))
        {
            hcf=i;
        }
    }
    return hcf;
 }