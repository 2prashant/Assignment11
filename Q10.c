/*
10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.
*/
#include<stdio.h>
int fact(int n)
{
    int ans=1;
    int i;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
double sum_fact(int n)
{
    double sum=0;
    double i,k;
    for(i=1;i<=n;i++)
    {
        k=fact(i)/i;
        sum+=k;
    }
    return sum;
}
int main()
{
    double n;
    printf("Enter a number\n");
    scanf("%lf",&n);
    printf("sum of nfact=%lf\n",sum_fact(n));
    return 0;
}